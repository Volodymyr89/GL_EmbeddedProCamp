
#include <stdio.h>
#include <stdint.h>
float Divider, Number, Calc;
int Result;
int main()
{
	
	printf("Enter Divider\n");
	scanf_s ("%f", &Divider);
	if (Divider > 0)
	{
		for (Result = 0;Result <= 500;Result++)
		{
			Calc = Number / Divider;
			printf("Result%d:%f\n", Result, Calc);
			Number++;
		}
	}
	else
	{
		printf("Not a valid divider\n");
	}
	system("pause");
	return 0;
}





