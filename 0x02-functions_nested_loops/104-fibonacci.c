#include <stdio.h>

int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next_fib;
	int count;

	printf("%lu, %lu", fib1, fib2); /* Print first two Fibonacci numbers */

	for (count = 3; count <= 98; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %lu", next_fib);

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n"); /* Print new line at the end */

	return (0);
}
