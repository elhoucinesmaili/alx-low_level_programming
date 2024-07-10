#include "main.h"

/**
 * _pow_recursion - Computes the power of a number
 * @x: Base number
 * @y: Exponent
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y > -1 && y <= 1 && y != 0)
		return (x);
	if (y == 0)
		return (1);
	if (y < -1)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
