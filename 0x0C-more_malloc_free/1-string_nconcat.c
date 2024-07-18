#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes of s2 to concatenate
 *
 * Return: A pointer to the newly allocated space in memory
 *         containing s1, followed by the first n bytes of s2,
 *         and null terminated. If the function fails, it should
 *         return NULL. If NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, len1, len2;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate lengths of s1 and s2 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* If n is greater than or equal to the length of s2, use the entire s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory for the concatenated string */
	concat = malloc(len1 + n + 1);
	if (concat == NULL)
		return (NULL);

	/* Copy s1 into the new memory */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy the first n bytes of s2 into the new memory */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Null-terminate the new string */
	concat[i] = '\0';

	return (concat);
}
