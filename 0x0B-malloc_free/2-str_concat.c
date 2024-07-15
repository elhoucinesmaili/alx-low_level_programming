#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 *
 * Return: pointer to the newly allocated space in memory containing
 *         the concatenated strings, or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1, len2;

	/* Treat NULL as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	/* Allocate memory for the concatenated string */
	concat = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* Copy s1 to the new string */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy s2 to the new string */
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];

	/* Null-terminate the new string */
	concat[i] = '\0';

	return (concat);
}
