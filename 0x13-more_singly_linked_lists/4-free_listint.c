
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list
 * @head: pointer
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *hdj;

	while (head)
	{
		hdj = head;

		head = head->next;

		free(hdj);
	}
}
