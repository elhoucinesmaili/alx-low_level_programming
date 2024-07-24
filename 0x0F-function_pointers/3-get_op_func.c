#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct operation toperform
 * @s: operation to perform
 *
 * Return: pointer to the correct function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int indix;

	indix = 0;
	while (ops[indix].op != NULL)
	{
		if (strcmp(s, ops[indix].op) == 0)
			break;
		indix++;
	}
	return (ops[indix].f);
}
