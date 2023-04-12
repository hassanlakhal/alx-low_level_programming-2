#include "main.h"
#include <stdlib.h>

/**
 * count_word - a function that helps counting
 * the number of words in a specific string
 * @s: the string
 *
 * Return: Number of words
 */

int count_word(char *s)
{
	int i, h, m;

	i = 0;
	h = 0;
	m = 0;

	for (h = 0; s[h] != '\0'; h++)
	{
		if (s[h] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			m++;
		}
	}

	return (m);
}
/**
 * **strtow - a function that splits
 * a string into words
 * @str: splitted string
 *
 * Return: Pointer to an array of
 * string (Success)
 * otherwise, NULL (Error)
 */

char **strtow(char *str)
{
	char **m, *t;
	int i, h, len, wor, c, st, fin;

	i = 0;
	h = 0;
	len = 0;
	c = 0;

	while (*(str + len))
		len++;
	wor = count_word(str);
	if (wor == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (wor + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
			fin = i;
			t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (st < fin)
					*t++ = str[st++];
				*t = '\0';
				m[h] = t - c;
				h++;
				c = 0;
			}
		}
		else if (c++ == 0)
		st = i;
	}
m[h] = NULL;
return (m);
}
