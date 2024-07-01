#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords for 101-crackme
 * Return: zero
 */
int main(void)
{
	int sum = 0;
	int i;

	srand(time(NULL));

	while (sum <= 2645)
	{
		i = (rand() % 94) + 33; /* Generates a printable ASCII character */
		sum += i;
		putchar(i);
	}

	/* Ensure the total sum is 2772 */
	putchar(2772 - sum);

	return (0);
}
