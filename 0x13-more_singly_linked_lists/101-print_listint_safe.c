#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: head of a list
 *
 * Return: number of nodes within the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	long int tawil;

	while (head)
	{
		tawil = head - head->next;
		num_nodes++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (tawil > 0)
			head = head->next;

		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				break;
		}
	}

	return (num_nodes);
}
