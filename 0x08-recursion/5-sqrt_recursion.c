#include "main.h"

/**
 * _sqrt_check - helper function to recursively find the square root
 * @n: number to find the square root of
 * @guess: current guess for the square root
 *
 * Return: the square root if found, otherwise -1
 */
int _sqrt_check(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (_sqrt_check(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the natural square root, or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_check(n, 0));
}
