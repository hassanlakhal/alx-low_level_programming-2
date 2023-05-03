#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: pointer
 * @index: index of deleted node
 *
 * Return: 1 if it succeeded otherwise, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int md;
	listint_t *hin;
	listint_t *next;

	if (head == NULL || *head == NULL)
			return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head)
		*head = next;
		return (1);
	}
	hin = *head;
	for (md = 0; md < index - 1; md++)
	{
		if (hin->next == NULL)
			return (-1);
		hin = hin->next;
	}
	next = hin->next;
	hin->next = next->next;
	free(next);

	return (1);
}
