#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory
 * for an array using malloc
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: Pointer with new allocated memory (Success)
 * otherwise, NULL if it fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ela;
	char *hji;
	unsigned int iq;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ela = malloc(size * nmemb);

	if (ela == NULL)
		return (NULL);

	hji = ela;
	for (iq = 0; iq < (size * nmemb); iq++)
		hji[iq] = '\0';

	return (ela);
}
