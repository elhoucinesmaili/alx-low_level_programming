#include "main.h"

/**
 * print_fibonacci - prints the first n Fibonacci numbers
 * , starting with 1 and 2
 * @n: the number of Fibonacci numbers to print
 */
void print_fibonacci(int n)
{
	int count;
	long int fib1 = 1, fib2 = 2, next_fib;

	if (n >= 1)
		printf("%ld", fib1);

	if (n >= 2)
		printf(", %ld", fib2);

	for (count = 2; count < n; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %ld", next_fib);

		fib1 = fib2;
		fib2 = next_fib;
	}

	printf("\n"); /* Print a new line at the end */
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_fibonacci(50);

	return (0);
}
