#include "main.h"

/**
 * compare_i - check if the starting and ending indices
 * are identical
 * @b: begin indexing from the left-hand of the string
 * @f: begin indexing from the right-hand side of the
 * string and traverse it in a backward direction
 *
 * Return: value  of 1 if palindrome, 0 if it is not
 */

int compare_i(char *b, char *f)
{
	if (b >= f)
		return (1);
	else if (*b == *f)
		return (compare_i(b + 1, f - 1));
	return (0);
}

/**
 * _strlen_rec - determine the string's length to
 *  obtain access to its final index
 * @s: string
 *
 * Return: length
 */

int _strlen_rec(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_rec(s + 1));
}

/**
 * is_palindrome - identify whether a string is a palindrome
 * @s: string
 *
 * Return: value of 1 if palindrome, 0 if it is not
 */

int is_palindrome(char *s)
{
	int l = _strlen_rec(s);

	return (compare_i(s, (s + l - 1)));
}
