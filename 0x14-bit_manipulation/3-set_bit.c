#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: pointer to the bit.
 * @index: index of the bit.
 *
 * Return: 1 for success, -1 for failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
