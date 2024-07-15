#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: the grid to be freed
 * @height: the height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	/* Check if the grid is NULL */
	if (grid == NULL || height <= 0)
		return;

	/* Free each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* Free the array of pointers */
	free(grid);
}
