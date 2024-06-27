#include "main.h"

/**
 * print_numbers - function that prints all numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		_putchar(number + '0');
	}
	_putchar('\n');

