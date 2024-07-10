#include "main.h"

/**
 * comparar - Helper function to count divisors
 * @n: Original number to check
 * @y: Counter to compare multiplication
 *
 * Return: Number of divisors
 */
int comparar(int n, int y)
{
	if (y <= n)
	{
		if (n % y == 0)
			return (1 + comparar(n, y + 1));
		else
			return (comparar(n, y + 1));
	}
	return (0);
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: Number to evaluate
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Numbers less than or equal to 1 are not prime */
	if (comparar(n, 1) == 2)
		return (1); /* If it has exactly 2 divisors (1 and itself), it's prime */
	else
		return (0); /* Otherwise, it's not prime */
}
