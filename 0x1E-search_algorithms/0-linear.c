#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not present or the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t mid, left, right;

    if (!array)
        return (-1);

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        /* Print the current search range */
        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        /* Calculate the middle index */
        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid); /* Return index if value is found */

        if (array[mid] < value)
            left = mid + 1; /* Narrow search to the right subarray */
        else
            right = mid - 1; /* Narrow search to the left subarray */
    }

    return (-1); /* Return -1 if value is not found */
}

