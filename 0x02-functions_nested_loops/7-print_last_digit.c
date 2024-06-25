#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: Integer input.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = -1 * (n % 10);
	else
		lastDigit = n % 10;

	_putchar(lastDigit + '0');
	return (lastDigit); /* Return the last digit */
}
