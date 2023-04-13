#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates
 * memory using malloc .
 * @b: the number of bytes that needs to be allocated
 *
 * Return: Pointer to the allocated memory
 * if malloc fails exit with 98 .
 */

void *malloc_checked(unsigned int b)
{
	void *hj;

	hj = malloc(b);
	if (hj == NULL)
		exit(98);

	return (hj);
}
