#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - a function that frees a listint_t list
 * @h: pointer
 *
 * Return: the size of the free'd list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t tol = 0;
	int gher;
	listint_t *hin;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		gher = *h - (*h)->next;

		if (gher > 0)
		{
			hin = (*h)->next;
			free(*h)
			*h = hin;
			tol++;
		}
		else
		{
			free(*h);
			*h = NULL;
			tol++;
			break;
		}
	}
	*h = NULL;

	return (tol);
}
