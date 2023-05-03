#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements
 * of a listint_t list
 * @h: pointer
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t hj;

	hj = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		hj++;
		h = h->next;
	}
	return (hj);
}
