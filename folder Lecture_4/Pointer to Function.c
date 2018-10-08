#include <stdio.h>
void funct1(int a, int b)
{
	int Sum;
	Sum = a + b;
	printf("the Sum of a and b is :%d\n", Sum);
}

int main()
{
	int a, b;
	void(*funct2)(int) = &funct1;
	printf("Enter a:\n");
	scanf_s("%d", &a);
	printf("Enter b:\n");
	scanf_s("%d", &b);
	(*funct2)(a,b);
	system("pause");
	return 0;
}
