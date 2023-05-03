#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint list
 * @head: pointer
 * @n: integer
 *
 * Return: the address of the new element,
 * otherwise, NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ori;
	listint_t *fin;

	ori = malloc(sizeof(listint_t));
	{
		if (ori == NULL)
			return (NULL);
	}
	ori->n = n;
	ori->next = NULL;

	if (*head == NULL)
		*head = ori;

	else
	{
		fin = *head;
		while (fin->next)
			fin = fin->next;
		fin->next = ori;
	}

	return (ori);
}
