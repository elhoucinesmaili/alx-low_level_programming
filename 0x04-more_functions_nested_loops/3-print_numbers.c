#include "main.h"

/**
 * print_numbers - function that prints all numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	/* Initialize number to start from '0' ASCII value */
	int number = '0';

	/* Loop through numbers from '0' to '9' */
	while (number <= '9')
	{
		_putchar(number); /* Print current number */
		number++; /* Move to the next number */
	}

	_putchar('\n'); /* Print newline character */
}
