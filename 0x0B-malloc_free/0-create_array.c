#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function that creats an array of chars
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: char to assign the array
 *
 * Return: pointer to the array (Success)
 * otherwise, NULL if fail (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *h;
	unsigned int i = 0;

	h = malloc(sizeof(char) * size);

	if (size == 0 || h == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		h[i] = c;

	return (h);
}
