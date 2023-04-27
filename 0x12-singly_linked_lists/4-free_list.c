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
	list_t *frz;

	while (head)
	{
		frz = head->next;
		free(frz->str);
		free(head);
		head = frz;
	}
}
