#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer to a new
 * allocated space in memory,which contains a copy of
 * the string given as a parameter
 * @str: the string to duplicate
 * Return: if pointer to the copied string (Success)
 * otherwise, NULL (Error).
 */
char *_strdup(char *str)
{
	char *replic;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	replic = malloc(sizeof(char) * (len + 1));

	if (replic == NULL)
		return (NULL);

	while ((replic[i] = str[i]) != '\0')
		i++;
	return (replic);
}
