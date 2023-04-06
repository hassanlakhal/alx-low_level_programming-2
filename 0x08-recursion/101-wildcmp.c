#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string and it can include an (*) as
 * a special character
 *
 * Return: if they are identical, return value of
 * 1,otherwise, return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
		return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
