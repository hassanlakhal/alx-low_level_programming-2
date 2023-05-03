#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: pointer
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *hin, *hdj;

	hin = NULL;
	hdj = NULL;

	while (*head)
	{
		hdj = (*head)->next;
		(*head)->next = hin;
		hin = *head;
		*head = hdj;
	}
		*head = hin;

	return (*head);
}
