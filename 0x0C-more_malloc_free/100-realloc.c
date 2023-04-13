#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: pointer of previous allocated memory
 * @old_size: the size of ptr
 * @new_size: the size of new memory
 *
 * Return: pointer to the reallocated memory
 * otherwise NULL .
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *hhj;
	char *mhd, *hnd;
	unsigned int iq;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		hhj = malloc(new_size);
		if (hhj == NULL)
			return (NULL);
		return (hhj);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	mhd = ptr;
	hhj = malloc(sizeof(*mhd) * new_size);

	if (hhj == NULL)
	{
		free(ptr);
		return (NULL);
	}
	hnd = hhj;
	for (iq = 0; iq < old_size && iq < new_size; iq++)
		hnd[iq] = *mhd++;
	free(ptr);
	return (hhj);
}
