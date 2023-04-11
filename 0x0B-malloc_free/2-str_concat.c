#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates
 * two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: points to the new string created (Success)
 * otherwise, NULL (Error) .
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, h, m, d;
	char *y;

	i = 0;
	h = 0;
	m = 0;
	d = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[h])
		h++;

	m = i + h;
	y = (char *)malloc(m * sizeof(char) + 1);

	if (y == NULL)
		return (NULL);
	h = 0;
	while (d < m)
	{
		if (d < i)
			y[d] = s1[d];
		if (d >= i)
		{
			y[d] = s2[h];
			h++;
		}
		d++;
	}
	y[d] = '\0';
	return (y);
}
