#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list
 * @head: pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *hdj;

	{
		if (head == NULL)
			return;
	}
	while (*head)
	{
		hdj = *head;

		*head = (*head)->next;

		free(hdj);
	}
	*head = NULL;
}
