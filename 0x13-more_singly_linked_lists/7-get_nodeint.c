#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list
 * @head: pointer
 * @index: index of node
 *
 * Return: NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int xd;

	for (xd = 0; xd < index; xd++)
	{
		if (head == NULL)
			return (NULL);
	}
	head = head->next;

	return (head);
}
