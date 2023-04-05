#include "main.h"

/**
 * sqrt_root - returns the natural square
 * root of a number
 * @n: number
 * @r: iterator
 * Return: square root or -1
 */

int sqrt_root(int n, int r)
{
	if (r * r > n)
		return (-1);
	else if (r * r == n)
		return (r);
	return (sqrt_root(n, r + 1));
}

/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number
 * @n: number
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (sqrt_root(n, 0));
}
