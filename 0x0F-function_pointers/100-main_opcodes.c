#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	unsigned char *main_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	main_ptr = (unsigned char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i > 0)
			printf(" ");
		printf("%02x", main_ptr[i]);
	}
	printf("\n");

	return (0);
}
