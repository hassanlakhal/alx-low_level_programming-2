#include "lists.h"

/**
 * listint_len - a function that returns thhe number of elements
 * in a linked listint_t list
 * @h: pointer
 *
 * Return: nodes input
 */

size_t listint_len(const listint_t *h)
{
	size_t hj;

	hj = 0;

	while (h != NULL)
	{
		h = h->next;
		hj++;
	}
	return (hj);
}
