
#include <stdio.h>
#include <stdint.h>
float Divider, Number, Calc;
int Result;
int main()
{
	
	printf("Enter Divider\n");
	scanf_s ("%f", &Divider);
	for (Result = 0;Result <= 500;Result++)
	{
		Calc= Number / Divider;
		printf("Result%d:%f",Result ,Calc);
		Number++;
	}
	system("pause");
	return 0;
}





