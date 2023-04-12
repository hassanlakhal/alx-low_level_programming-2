#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional
 * frid previously created by alloc_grid function
 * @grid: grid to be freed
 * @height: height of grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
}
