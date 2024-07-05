#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to update
 * @to: string to set pointer to
 *
 * Description: This function updates the value of pointer `s` to point to
 * the string pointed to by `to`.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
