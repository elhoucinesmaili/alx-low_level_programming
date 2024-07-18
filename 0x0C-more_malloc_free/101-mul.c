#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_digit - Checks if a string is composed of digits
 * @s: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * multiply - Multiplies two strings representing numbers
 * @num1: The first number as a string
 * @num2: The second number as a string
 *
 * Return: A string representing the product of num1 and num2
 */
char *multiply(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));
	char *final_result;

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	multiply_arrays(num1, num2, result, len1, len2);

	final_result = convert_to_string(result, len1 + len2);

	free(result);

	return (final_result);
}

/**
 * multiply_arrays - Multiplies two strings represented as arrays
 * @num1: The first number as a string
 * @num2: The second number as a string
 * @result: Array to store the result of multiplication
 * @len1: Length of num1
 * @len2: Length of num2
 */
void multiply_arrays(char *num1, char *num2, int *result, int len1, int len2)
{
	int i, j, carry, n1, n2, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] += carry;
	}
}

/**
 * convert_to_string - Converts an array of integers to a string
 * @result: Array of integers representing the number
 * @size: Size of the result array
 *
 * Return: A string representing the number
 */
char *convert_to_string(int *result, int size)
{
	char *final_result;
	int i = 0, j = 0;

	while (i < size && result[i] == 0)
		i++;

	if (i == size)
		return (strdup("0"));

	final_result = malloc((size - i + 1) * sizeof(char));

	if (final_result == NULL)
	{
		free(result);
		printf("Error\n");
		exit(98);
	}

	for (; i < size; i++, j++)
		final_result[j] = result[i] + '0';

	final_result[j] = '\0';

	return (final_result);
}

/**
 * main - Entry point. Multiplies two positive numbers passed as arguments.
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	result = multiply(argv[1], argv[2]);
	printf("%s\n", result);
	free(result);

	return (0);
}
