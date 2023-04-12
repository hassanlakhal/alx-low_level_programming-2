#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all
 * the arguments of your program
 * @ac: argument count
 * @av: pointer to array of size argument count
 *
 * Return: NULL on fail, and if ac == 0 or av == null,
 * pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	char *tostr;
	int i, h, m, del;

	del = 0;
	m = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		h = 0;
		while (av[i][h])
		{
			del++;
			h++;
		}
		del++;
		i++;
	}
		tostr = malloc((sizeof(char) * del) + 1);
		if (tostr == NULL)
			return (NULL);
		i = 0;
		while (i < ac)
		{
			h = 0;
			while (av[i][h])
			{
				tostr[m] = av[i][h];
				h++;
				m++;
			}
			tostr[m] = '\n';
			m++;
			i++;
		}
		tostr[m] = '\0';

		return (tostr);
}
