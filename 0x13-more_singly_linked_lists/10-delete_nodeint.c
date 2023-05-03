#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index of a listint_t linked list
 * @head: pointer
 * @index: index of deleted node
 *
 * Return: 1 if it succeeded otherwise, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hin;
	listint_t *hdj;
	unsigned int md;

	{
		if (*head == NULL)
			return (-1);
	}
	hin = *head;

	if (index == 0)
	{
		*head = hin->next;
		free(hin);
		return (1);
	}

	for (md = 0; md < index - 1; md++)
	{
		if (hin == NULL)
			return (-1);
	}

		hin = hin->next;
		hdj = hin->next;
		hin->next = hdj->next;

		free(hdj);

		return (1);
}
