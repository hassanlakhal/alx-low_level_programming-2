#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes node at index
 * of a listint_t linked list
 * @head: pointer
 * @index: index of deleted node
 *
 * Return: 1 if it succeeded otherwise, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hin = *head;
	listint_t *net = NULL;
	unsigned int md = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(hin);
		return (1);
	}

	while (md < index - 1)
	{
		if (!hin || !(hin->next))
			return (-1);
		hin = hin->next;
		md++;
	}
	net = hin->next;
	hin->next = net->next;
	free(net);

	return (1);
}
