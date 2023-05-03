#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer
 *
 * Return: NULL if the list is empty
 */

int sum_listint(listint_t *head)
{
	int tot;

	tot = 0;

	while (head)
	{
		tot += head->n;

		head = head->next;
	}
	return (tot);
}
