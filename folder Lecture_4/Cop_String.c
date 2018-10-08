#include<stdio.h>

char Input [100], Output[100];
void CopyStr()
{
	int i;
	printf("Output String:\n");
	for (i = 0; Input[i] !='\0'; ++i)
	{
		Output[i] = Input[i];
	}
	printf("%s\n", Output);
}

int main()
{
	printf("Enter word to copy\n");
	scanf_s("%s", Input, sizeof(Input));
	CopyStr();
	system("pause");
}