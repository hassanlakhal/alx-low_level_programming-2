#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - a function that searches for an integer
 * @array: the array
 * @size: size of the array
 * @cmp: pointer to the function
 *
 * Return: if size <= 0 or no element matches return -1
 * Otherwise, 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int h;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);
	for (h = 0; h < size; h++)
	{
		if (cmp(*(array + h)))
			return (h);
	}

		return (-1);
}
