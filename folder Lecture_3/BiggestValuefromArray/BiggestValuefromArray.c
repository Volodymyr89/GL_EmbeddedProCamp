

#include <stdio.h>
#include <stdint.h>
uint8_t array[5], maximum, c;
uint8_t Compare(uint8_t maximum)
{
	maximum = array[0];
	for (c = 1; c < 5; c++)
	{
		if (array[c] > maximum)
		{
			maximum = array[c];
		}
	}
	return maximum;
}
int main()
{
	printf("Enter Number:\n");
	for (c = 0; c < 5; c++)
		scanf_s("%d", &array[c]);
	printf("Maximum is: %d\n", Compare((uint8_t) maximum));
	system("pause");
	return 0;
}