#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: Pointer to the array of split words, or NULL on failure.
 */
char **strtow(char *str)
{
	char **split;
	int i, j = 0, size = 0, words = num_words(str);

	if (words == 0)
		return (NULL);

	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (split == NULL)
		return (NULL);

	for (i = 0; i <= len(str); i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
			size++;
		else if ((str[i] == ' ' || str[i] == '\0') && i && str[i - 1] != ' ')
		{
			split[j] = (char *)malloc(sizeof(char) * (size + 1));
			if (split[j] != NULL)
			{
				int temp;

				for (temp = 0; temp < size; temp++)
					split[j][temp] = str[i - size + temp];
				split[j][size] = '\0'; /* Null-terminate the word */
				size = 0;              /* Reset size for next word */
				j++;
			}
			else
			{
				while (j-- > 0)
					free(split[j]);
				free(split);
				return (NULL);
			}
		}
	}
	split[words] = NULL; /* Set the last element to NULL */
	return (split);
}

/**
 * num_words - Counts the number of words in a string.
 * @str: The string to be analyzed.
 *
 * Return: The number of words.
 */
int num_words(char *str)
{
	int i = 0, words = 0;

	while (i <= len(str))
	{
		if (str[i] != ' ' && str[i] != '\0')
		{
			i++;
		}
		else if ((str[i] == ' ' || str[i] == '\0') && i && str[i - 1] != ' ')
		{
			words++;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (words);
}

/**
 * len - Returns the length of a string.
 * @str: The string to be measured.
 *
 * Return: Length of the string.
 */
int len(char *str)
{
	int length = 0;

	while (str && str[length])
		length++;

	return (length);
}
