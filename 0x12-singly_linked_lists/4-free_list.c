#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: pointer
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *lissy;

	lissy = head;
	while (lissy != NULL)
	{
		free(lissy->str);
		free(lissy);
		lissy = lissy->next;
	}
}
