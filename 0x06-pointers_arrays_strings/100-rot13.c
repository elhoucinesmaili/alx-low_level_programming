#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (input[j] != '\0')
		{
			if (str[i] == input[j])
			{
				str[i] = output[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
