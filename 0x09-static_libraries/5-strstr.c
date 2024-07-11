#include <stddef.h> /* for NULL definition */

/**
 * _strstr - locates a substring
 * @haystack: the main string to search within
 * @needle: the substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *start, *p1, *p2;

	while (*haystack != '\0')
	{
		start = haystack;
		p1 = start;
		p2 = needle;

		while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0')
		{
			p1++;
			p2++;
		}

		if (*p2 == '\0')
			return (start);

		haystack++;
	}

	return (NULL);
}
