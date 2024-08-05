#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a given index to 0.
 * @n: pointer to the bit.
 * @index: index of the bit to clear.
 *
 * Return: 1 for success, -1 for failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
