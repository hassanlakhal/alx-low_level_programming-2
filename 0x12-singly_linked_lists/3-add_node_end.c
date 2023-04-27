#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list
 * @head: double pointer
 * @str: string
 *
 * Return: the address of the new element,
 * otherwise, NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnd;
	list_t *fin;
	unsigned int hj;

	hj = 0;
	while (str[hj])
		hj++;

	newnd = malloc(sizeof(list_t));
	if (newnd == NULL)
		return (NULL);

	newnd->str = strdup(str);
	newnd->len = hj;
	newnd->next = NULL;

	if (*head == NULL)
	{
		*head = newnd;
		return (newnd);
	}
	else
	{
		fin = *head;
		while (fin->next)
			fin = fin->next;
		fin->next = newnd;
	}
	return (newnd);
}
