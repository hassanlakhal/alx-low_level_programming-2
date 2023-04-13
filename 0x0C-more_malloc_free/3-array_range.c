#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array
 * of integers
 * @min: first array
 * @max: last array
 *
 * Return: Pointer to the array (Success)
 * otherwise, NULL if it fails or if min > max
 */

int *array_range(int min, int max)
{
	int *hnd, iq, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	hnd = malloc(sizeof(int) * size);

	if (hnd == NULL)
		return (NULL);

	for (iq = 0; iq < size; iq++)
		hnd[iq] = min++;

	return (hnd);
}
