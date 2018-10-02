#include <stdio.h>
#include <stdint.h>
uint8_t inputStr[5];
uint8_t i = 0;
uint8_t j = 0;
uint8_t m=0;
uint8_t CopyStr[5];

uint8_t Copy(uint8_t CopyStr[5])
{
	CopyStr = inputStr[j];
	return CopyStr;
}

int main()
{
	printf("Enter five digits:\n");
	scanf_s("%d", &inputStr[i]);
	while (i <4)
		{
		i++;
		printf("Next Digit:\n");
		scanf_s("%d", &inputStr[i]);
		
	}

	for (j = 0; j < 5; j++) 
	{
		printf("Element[%d]=%d\n", j, Copy(CopyStr[j]));
	}
	system("pause");
	
}