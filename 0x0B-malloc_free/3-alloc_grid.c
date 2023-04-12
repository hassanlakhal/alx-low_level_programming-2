#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: width input
 * @height: height input
 *
 * Return: pointer to the created array (Success)
 * otherwise, NULL (Error) .
 */

int **alloc_grid(int width, int height)
{
	int **ash;
	int i, h, m, d;

	if (width <= 0 || height <= 0)
		return (NULL);
	ash = malloc(height * sizeof(int *));
	if (ash == NULL)
	{
		free(ash);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ash[i] = malloc(width * sizeof(int));
		if (ash[i] == NULL)
		{
			for (h = i; h >= 0; h--)
			{
				free(ash[h]);
			}
			free(ash);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (d = 0; d < width; d++)
			ash[m][d] = 0;
	}
	return (ash);
}
