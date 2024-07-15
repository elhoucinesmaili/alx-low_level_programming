#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         was available or if str is NULL.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allocate memory for the new string */
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);

	/* Copy the string to the newly allocated memory */
	for (i = 0; i < len; i++)
		dup[i] = str[i];
	dup[len] = '\0';  /* Don't forget to add the null terminator */

	return (dup);
}
