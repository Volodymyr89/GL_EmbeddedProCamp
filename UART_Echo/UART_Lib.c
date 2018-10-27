#include "stm32f3xx.h"  // Device header

char str;

void Init (void)
{
	RCC->APB1ENR |= RCC_APB1ENR_UART4EN;
	RCC->AHBENR|=RCC_AHBENR_GPIOCEN;
	GPIOC->MODER |= (1<<21)&(~(1<<20)); // PIN10 AF  
	GPIOC->OTYPER &=~(1<<10); // PIN10 is pp
	GPIOC->PUPDR &= ~(1<<21|1<<20);// PIN10 no PU
	GPIOC->OSPEEDR |=1<<21|1<<20;// 50MHz
	GPIOC->AFR[1]|=0b0101<<8;//AF5 for PIN10
	RCC->AHBENR|=RCC_AHBENR_GPIOAEN; // Input
	GPIOC->MODER |= 1<<23 &(~(1<<22));// PIN11 AF
	GPIOC->PUPDR &=~(1<<23)&(1<<22);// PIN11 no PU
	GPIOC->AFR[1]|=0b0101<<12; // AF5 for PIN11
	UART4->BRR=8000000/9600;// baud rate is 9600
	UART4->CR1 &= ~(1<<12);// 8 bit word
	UART4->CR1 |=USART_CR1_RXNEIE; //input interrupt enable
	NVIC_EnableIRQ(UART4_IRQn);//interrupt vector
}

void deinit (void)
{
	RCC->APB1ENR &= ~RCC_APB1ENR_UART4EN; // UART enable
	RCC->AHBENR &= ~RCC_AHBENR_GPIOCEN; // Uart disable
	GPIOC->MODER &= ~((1<<21)&(1<<20)); // no AF  
	GPIOC->OTYPER &=~(1<<10); // PIN10 is pp
	GPIOC->OSPEEDR &=~(1<<21&1<<20);// Low Speed
	RCC->AHBENR &= ~RCC_AHBENR_GPIOAEN; // PINA clock disable
	UART4->CR1 &= ~USART_CR1_RXNEIE; //input interrupt disable
}

void open (void)
{
	UART4->CR1|=USART_CR1_UE|USART_CR1_TE|USART_CR1_RE;// receiver, transmitter and UART enable
}
void read (void)
{
		if (UART4->ISR & USART_CR1_RXNEIE)
	{		
	UART4->ISR &= ~USART_CR1_RXNEIE;		
	str=UART4->RDR;      
	}
}

void close (void)
{
	UART4->CR1 &=~(USART_CR1_UE&USART_CR1_TE&USART_CR1_RE);// receiver, transmitter and UART disable
	
}

 void write (void)
{
	UART4->TDR= str; 
}

void UART4_IRQHandler(void) // interrupt on receive data
{
	read();
	write ();
}

