#include "stm32f30x.h" // Keil::Device:Startup
int CNT;
void delay (void)
{
	for (CNT=0;CNT<=1000000;CNT++);
}

void Setup_PINs (void)
{
	RCC->AHBENR |=(1<<21);
	GPIOE->MODER |= 1<<30; 
	GPIOE->MODER &=~(1<<31); 
}

int main (void)
{
	Setup_PINs ();
	while (1)
	{
	GPIOE->ODR ^=1<<15;
		delay ();
	}
}