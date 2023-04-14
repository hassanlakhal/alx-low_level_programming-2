#include <stdlib.h>
#include "main.h"
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - a function that checks if a string contains non digit char
 * @s: string
 *
 * Return: 0 if a non digit is found
 * otherwise 1 .
 */

int is_digit(char *s)
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
 * _strlen - a function that length of a string
 * @s: evaluated string
 *
 * Return: length of a string
 */

int _strlen(char *s)
{
	int h = 0;

	while (s[h] != '\0')
	{
		h++;
	}
	return (h);
}

/**
 * errors - a function that takes care of errors
 * for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a function that multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *y, *z;
	int len1, len2, len, h, cy, iq, eq, *result, d = 0;

	y = argv[1], z = argv[2];
	if (argc != 3 || !is_digit(y) || !is_digit(z))
		errors();
	len1 = _strlen(y);
	len2 = _strlen(z);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (h = 0; h <= len1 + len2; h++)
		result[h] = 0;
	for (len1 = len2 - 1; len1 >= 0; len--)
	{
		iq = y[len1] - '0';
		cy = 0;
		for (len2 = _strlen(z) - 1; len2 >= 0; len2--)
		{
			eq = z[len2] - '0';
			cy += result[len1 + len2 + 1] + (iq * eq);
			result[len1 + len2] = cy % 10;
			cy /= 10;
		}
		if (cy > 0)
			result[len1 + len2 + 1] += cy;
	}
	for (h = 0; h < len - 1; h++)
	{
		if (result[h])
			d = 1;
		if (d)
			putchar(result[h] + '0');
	}
	if (!d)
		putchar ('0');
	putchar('\n');
	free(result);
	return (0);
}
