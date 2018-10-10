

#include <stdio.h>
#include <stdint.h>

int array[5];

int Compare(void)
{
    int maximum;
    
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

int main(void)
{
    uint8_t c;
    
	printf("Enter Number:\n");
	for (c = 0; c < 5; c++)
		scanf_s("%d", &array[c]);
	printf("Maximum is: %d\n", Compare());
	system("pause");
	return 0;
}