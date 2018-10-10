
#include <stdio.h>
#include <math.h>

int main()
{
	char Radius = 6;
	float Area = 0;
	const float pi = 3.14;
	float Perimeter;

	Area = pi * (pow(Radius, 2)); // area calculation
	Perimeter = 2 * 3.14*Radius; // perimeter calculation
	printf("Circle Area = %f m2\n", Area);
	printf("Circle Perimeter = %f m2", Perimeter);
	getchar();
	return 0;
}