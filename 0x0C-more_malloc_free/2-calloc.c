#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element in the array
 *
 * Return: A pointer to the allocated memory, which is set to zero
 *         If nmemb or size is 0, or if malloc fails, return NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	char *fill;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	fill = ptr;
	for (i = 0; i < nmemb * size; i++)
		fill[i] = 0;

	return (ptr);
}
