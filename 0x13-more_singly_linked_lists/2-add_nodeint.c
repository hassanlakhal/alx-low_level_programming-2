#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list
 * @head: pointer
 * @n: integer
 *
 * Return: the address of the new element,
 * otherwise, NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ori;

	ori = malloc(sizeof(listint_t));
	{
	if (ori == NULL)
		return (NULL);
	}

	ori->n = n;
	ori->next = *head;
	*head = ori;

	return (*head);
}
