
#include <stdio.h>
#include <stdint.h>

int main()
{
	float L;
	float W;
	float Area;
	float Perimeter;

	printf_s("Enter Lenght (m):");
	scanf_s("%f", &L);
	printf("Enter Width (m):");
	scanf_s("%f", &W);
	Area = L * W; // area calculation
	Area = Area * 39.3701;// converting to inches
	Perimeter = 2 * L + 2 * W; // perimeter calculation
	Perimeter = Perimeter * 39.3701;// converting to inches
	printf("Rectangle Area = %f inch2\n", Area);
	printf("Perimeter = %f inch2", Perimeter);
	getchar();
	return 0;
}