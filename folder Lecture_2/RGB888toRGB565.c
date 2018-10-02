/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

/******************************************************************************/

#include <stdint.h>
#include <stdio.h>

uint8_t Red;
uint8_t Green;
uint8_t Blue;
uint16_t RGB565;

int main()
{
	printf("Enter Red\n");
	scanf_s("%u",&Red);
	printf("Enter Green\n");
	scanf_s("%u",&Green);
	printf("Enter Blue\n");
	scanf_s("%u",&Blue);
	RGB565 = (((uint16_t)(Red & 0xf8) << 8) + ((Green & 0xfc) << 3) + (Blue >> 3));
	printf ("RGB565: %u", RGB565);
	getchar();
	return 0;
}

