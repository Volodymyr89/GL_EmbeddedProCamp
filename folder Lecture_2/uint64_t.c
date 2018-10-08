#include <stdint.h>
#include <stdio.h>

uint64_t swap64(uint64_t Digit)
{
	(((uint64_t)(Digit) << 56) |
		(((uint64_t)(Digit) << 40) & 0xff000000000000ULL) |
		(((uint64_t)(Digit) << 24) & 0xff0000000000ULL) |
		(((uint64_t)(Digit) << 8) & 0xff00000000ULL) |
		(((uint64_t)(Digit) >> 8) & 0xff000000ULL) |
		(((uint64_t)(Digit) >> 24) & 0xff0000ULL) |
		(((uint64_t)(Digit) >> 40) & 0xff00ULL) |
		((uint64_t)(Digit) >> 56));

	return Digit;
}
int main()
{
	uint64_t  Digit;

	printf_s("Enter digit to swap:\n");
	scanf_s("%08X", &Digit);
	printf("swap64 Result is: %016x", swap64(Digit));
	system("pause");
	return 0;
}