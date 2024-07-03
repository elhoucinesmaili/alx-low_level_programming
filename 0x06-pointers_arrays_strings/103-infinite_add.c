#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *s)
{
	/* Define ROT13 encoding arrays */
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	/* Iterate through each character in the string */
	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if the character is in array 'a' */
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j]; /* Perform ROT13 substitution */
				break;
			}
		}
	}

	return (s); /* Return the modified string */
}
