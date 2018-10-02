
#include <stdio.h>
#include <stdint.h>

float Divider, Number, Calc;
int Result;

int main()
{
	
	printf("Enter Divider\n");
	scanf_s ("%f", &Divider);
    // @remark add protection from zero value
	for (Result = 1; Result <= 500;Result++)
	{
		Calc = Result / Divider;
		printf("Result %d: %f", Result, Calc);
	}
	system("pause");
	return 0;
}





