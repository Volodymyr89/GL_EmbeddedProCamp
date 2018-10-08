#include<stdio.h>

int main()
{
	int c, n = 10, fact = 1;

	for (c = 1; c <= n; c++)
		fact = fact * c;

	printf("Factorial of %d is %d\n", n, fact);
	getchar();
	return 0;
}