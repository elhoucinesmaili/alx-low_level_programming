#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: the number of arguments
 * @av: the array of argument strings
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, total_length = 0, k = 0;

	/* Check for valid input */
	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length required for the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++;  /* For the newline character */
	}

	/* Allocate memory for the new string */
	result = (char *)malloc(total_length + 1);  /* +1 for the null terminator */
	if (result == NULL)
		return (NULL);

	/* Copy arguments into the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[k++] = av[i][j];
		}
		result[k++] = '\n';  /* Add newline after each argument */
	}
	result[k] = '\0';  /* Null terminate the string */

	return (result);
}
