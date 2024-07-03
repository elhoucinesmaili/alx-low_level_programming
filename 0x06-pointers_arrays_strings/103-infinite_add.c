#include "main.h"

/**
 * rot13 - Encodes a string in ROT13
 * @s: String to be encoded
 * Return: Pointer to the resulting string
 */
char *rot13(char *s)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		/* Check if s[i] is an alphabetic character */
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			for (j = 0; a[j] != '\0'; j++)
			{
				if (s[i] == a[j])
				{
					s[i] = b[j];
					break;
				}
			}
		}
	}
	return (s);
}
