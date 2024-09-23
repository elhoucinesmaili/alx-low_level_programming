#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to use from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;
	int i = 0;

	/* Find the end of the destination string */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* Append up to n characters from the source string */
	while (i < n && *src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		i++;
	}

	/* Add the null terminator */
	*dest_ptr = '\0';

	return (dest);
}
