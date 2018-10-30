#include<stdio.h>

// @remark Add protection that will prevent string overflow if you will enter string with length 100 and more symbols

char Input [100], Output[100];

void CopyStr()
{
	int i;
	for (i = 0; Input[i] != '\0'; ++i)
	{
		Output[i] = Input[i];
	}
}

int main()
{
	printf("Enter word to copy\n");
	scanf_s("%s", Input, sizeof(Input));
	CopyStr();
	printf("Output String: %s\n", Output);
	system("pause");
}