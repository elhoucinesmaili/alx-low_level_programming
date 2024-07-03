#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	/* Find the end of the destination string */
	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	/* Append the source string to the destination string */
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	/* Add the null terminator */
	*dest_ptr = '\0';

	return (dest);
}
