#include <stdio.h>
#include <stdint.h>

uint8_t inputStr[6];                // 5 symbols of string and last symbol - '\0' (end of string)
uint8_t outStr[6];

void Copy(uint8_t* dest)
{    
    uint8_t j;
    
    for (j = 0; j < 6; j++) 
	{
        dest[j] = inputStr[j];           // Copy input string to destination
    }
}

int main()
{
    uint8_t i;
    
	printf("Enter five digits:\n");
	scanf_s("%d", &inputStr[i]);
    i = 0;
	while (i <4)
	{
		i++;
		printf("Next Digit:\n");
		scanf_s("%d", &inputStr[i]);
		
	}
    inputStr[5] = '\0';
    
    Copy(outStr);
    
	printf("Output string is %s", outStr);

	system("pause");
	
}