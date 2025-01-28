#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 *               using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where the value is located,
 *         or -1 if the value is not present or array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev, curr;

    if (!array || size == 0)
        return (-1);

    /* Calculate the jump step */
    step = sqrt(size);
    prev = 0;
    curr = 0;

    /* Jump through the array while the current element is less than the value */
    while (curr < size && array[curr] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += step;
    }

    /* Print the range being searched */
    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

    /* Perform a linear search within the identified block */
    curr = (curr < size) ? curr : size - 1;
    for (size_t i = prev; i <= curr; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
