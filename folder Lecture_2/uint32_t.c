/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdint.h>
#include <stdio.h>

uint32_t swap32 (uint32_t  Digit)
{
	Digit = ((Digit >> 24) & 0xff) | // move byte 3 to byte 0
            ((Digit<<8)&0xff0000) | // move byte 1 to byte 2
            ((Digit>>8)&0xff00) | // move byte 2 to byte 1
            ((Digit<<24)&0xff000000); 
	return Digit;
}

int main()
{  	
    uint32_t  Digit;
    
    printf("Enter digit to swap:\n");
	scanf_s("%08X", &Digit);
	printf("swap32 Result is: %08X",swap32 (Digit));
	system("pause");
	return 0;
}

