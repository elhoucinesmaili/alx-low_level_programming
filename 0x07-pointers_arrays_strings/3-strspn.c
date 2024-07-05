#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;
	int match;

	while (*s)
	{
		match = 0;
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (!match)
			break;
		count++;
		s++;
	}
	return (count);
}
