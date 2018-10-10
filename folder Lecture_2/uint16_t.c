#include <stdint.h>
#include <stdio.h>

uint16_t swap16(uint16_t  D)
{
	D = ((D << 8) & 0xFF00) | ((D >> 8) & 0x00FF);// swap function
	return D;
}

int main()
{
	uint16_t D;
	printf("Enter digit to swap:\n");
	scanf_s("%04X", &D);
	swap16(D);
	printf("swap16 Result is: %04X", swap16(D));
	getchar();
	return 0;
}
