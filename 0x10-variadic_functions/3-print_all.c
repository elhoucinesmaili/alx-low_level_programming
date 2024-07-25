#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all_helper - Helper function to print based on format specifier.
 * @format: Format specifier.
 * @args: Argument list.
 */
void print_all_helper(char format, va_list args)
{
	char *str;

	switch (format)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
	}
}

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	const char t_args[] = "cifs";
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (t_args[j])
		{
			if (format[i] == t_args[j])
			{
				printf("%s", sep);
				print_all_helper(format[i], args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
