#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: the number.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: The value of the bit, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
