#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize the first character if it's a letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 'a' - 'A';

	while (str[i] != '\0')
	{
		/* Check for word separators */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			/* If separator is found, check next character for letter to capitalize */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 'a' - 'A';
		}

		i++;
	}

	return (str);
}
