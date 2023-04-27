#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list
 * @h: pointer
 *
 * Return: node input
 */

size_t list_len(const list_t *h)
{
	size_t hj;

	hj = 0;
	while (h)
	{
		h = h->next;
		hj++;
	}
	return (hj);
}
