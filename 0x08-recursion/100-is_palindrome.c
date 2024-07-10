#include "main.h"

/**
 * longitud - Calculates the length of a string recursively
 * @s: String to calculate length
 * Return: Length of the string
 */
int longitud(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + longitud(s + 1));
}

/**
 * comparar - Compares characters of a string recursively
 * @i: Starting index
 * @l: Ending index
 * @s: String to compare
 * Return: 1 if palindrome, 0 otherwise
 */
int comparar(int i, int l, char *s)
{
	if (i >= l)
		return (1);
	else if (s[i] == s[l])
		return (comparar(i + 1, l - 1, s));
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: String to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = longitud(s);

	return (comparar(0, length - 1, s));
}
