#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates
 * two strings
 * @s1: first string
 * @s2: second string
 * @n: valid number of bytes from s2 to concatenate
 * to s1
 *
 * Return: Pointer to the resulting string (Success)
 * otherwise, NULL .
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *hhj;
	unsigned int el = n, iq;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (iq = 0; s1[iq]; iq++)
		el++;

	hhj = malloc(sizeof(char) * (el + 1));

	if (hhj == NULL)
		return (NULL);

	el = 0;
	for (iq = 0; s1[iq]; iq++)
		hhj[el++] = s1[iq];

	for (iq = 0; s2[iq] && iq < n; iq++)
		hhj[el++] = s2[iq];

	hhj[el] = '\0';

	return (hhj);
}
