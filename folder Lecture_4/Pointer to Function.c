#include <stdio.h>

// @remark Task was not implemented. Create function, that receives pointer to other function as a parameter

// Tip
int funct2(int(*func)(int, int), int a, int b)
{
	return func(a, b);
}


int funct1(int a, int b)
{
	int Sum;
	Sum = a + b;
	return Sum;
}

int main()
{
	int a, b, sum;
	//void(*funct2)(int) = &funct1;
	printf("Enter a:\n");
	scanf_s("%d", &a);
	printf("Enter b:\n");
	scanf_s("%d", &b);
	
	sum = funct2(funct1, a, b);
	printf("the Sum of a and b is :%d\n", sum);
	system("pause");
	return 0;
}
