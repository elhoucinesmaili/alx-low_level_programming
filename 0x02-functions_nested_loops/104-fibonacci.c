#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 98 Fibonacci numbers separated by commas,
 * starting with 1 and 2, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Variables for Fibonacci sequence */
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
