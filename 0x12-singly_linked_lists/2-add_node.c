#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node
 * at the beggining of a list_t list
 * @head: double pointer
 * @str: new string
 *
 * Return: te address of the new element,
 * otherwise, NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnd;
	unsigned int hj;

	hj = 0;
	while (str[hj])
		hj++;

	newnd = malloc(sizeof(list_t));
	if (newnd == NULL)
		return (NULL);

	newnd->str = strdup(str);
	newnd->len = hj;
	newnd->next = (*head);
	(*head) = newnd;

	return (*head);
}
