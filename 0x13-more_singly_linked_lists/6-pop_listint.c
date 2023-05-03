#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and return the head node's data (n)
 * @head: pointer
 *
 * Return: 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	int hj;
	listint_t *hdj;

	{
		if (*head == NULL)
			return (0);
	}
	hdj = *head;

	hj = hdj->n;

	*head = hdj->next;

	free(hdj);

	return (hj);
}
