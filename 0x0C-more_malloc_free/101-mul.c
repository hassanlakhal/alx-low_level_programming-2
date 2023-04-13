#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * check_dig - a function that checks a string for digits
 * @s: string
 *
 * Return: 1 if digit was found , otherwise 0
 */

int check_dig(char *s)
{
	int h = 0;

	while (s[h])
	{
		if (s[h] < '0' || s[h] > '9')
			return (0);
		h++;
	}
	return (1);
}

/**
 * _lengt - length of a string
 * @s: string
 *
 * Return: string length
 */

int _lengt(char *s)
{
	int h = 0;

	while (s[h] != '\0')

		h++;

	return (h);
}

/**
 * main_err - checks errors for main
 *
 */

void main_err(void)
{
	printf("ERROR\n");
	exit(98);
}

/**
 * main - a function that multiplies two
 * positive numbers
 * @argc: argument input
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *st, *sz;
	int eln1, eln2, eln, h, m, iq, eq, *fin, d = 0;

	st = argv[1], sz = argv[2];
	if (argc != 3 || !check_dig(st) || !check_dig(sz))
		main_err();
	eln1 = _lengt(st);
	eln2 = _lengt(sz);
	eln = eln1 + eln2 + 1;
	fin = malloc(sizeof(int) * eln);
	if (!fin)
		return (1);
	for (h = 0; h <= eln1 + eln2; h++)
		fin[h] = 0;
	for (eln1 = eln1 - 1; eln1 >= 0; eln1--)
	{
		iq = st[eln2] - '0';
		m = 0;
		for (eln2 = _lengt(sz) - 1; eln2 >= 0; eln2--)
		{
			eq = sz[eln2] - '0';
			m += fin[eln1 + eln2 + 1] + (iq * eq);
			fin[eln1 + eln2 + 1] = m % 10;
			m /= 10;
		}
		if (m > 0)
			fin[eln1 + eln2 + 1] += m;
	}
	for (h = 0; h < eln - 1; h++)
	{
		if (fin[h])
			d = 1;
		if (d)
			putchar(fin[h] + '0');
	}
	if (!d)
		putchar('0');
	putchar('\n');
	free(fin);
	return (0);
}
