#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer whose last digit is to be printed
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	/* Get the absolute value of n */
	n = _abs(n);

	/* Get the last digit */
	n = n % 10;

	/* Print the last digit */
	_putchar(n + '0');

	/* Return the last digit */
	return (n);
}
