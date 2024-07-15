#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0; /* Not in a word */
		else if (in_word == 0)
		{
			in_word = 1; /* Start of a new word */
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * get_word - Extracts a word from the string
 * @str: The input string
 * @index: Pointer to the current index in the string
 *
 * Return: Pointer to the extracted word or NULL on failure
 */
char *get_word(char *str, int *index)
{
	int start, end, length;

	while (str[*index] == ' ')
		(*index)++;

	start = *index; /* Start of the word */
	while (str[*index] && str[*index] != ' ')
		(*index)++;

	end = *index; /* End of the word */
	length = end - start;

	char *word = malloc((length + 1) * sizeof(char));

	if (word == NULL)
		return (NULL); /* Memory allocation failed */

	strncpy(word, &str[start], length);
	word[length] = '\0'; /* Null-terminate the string */

	return (word);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words) or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, index = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		words[i] = get_word(str, &index);
		if (words[i] == NULL)
		{
			while (i > 0)
				free(words[--i]);
			free(words);
			return (NULL);
		}
	}
	words[word_count] = NULL; /* Set the last element to NULL */

	return (words);
}
