#include "main.h"

/**
 * is_prime_n - says if it is a prime number
 * @n: number
 * @d: divisor
 *
 * Return: 1 if n is a prime number, 0 if it is not
 */

int is_prime_n(int n, int d)
{
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (is_prime_n(n, d + 1));
}

/**
 * is_prime_number - says if it is a prime number
 * @n: number
 *
 * Return: 1 if n is a prime number, 0 if it is not
 */

int is_prime_number(int n)
{
	int d = 3;
		if (n < 2 || n % 2 == 0)
			return (0);
		if (n == 2)
			return (1);
	return (is_prime_n(n, d));
}
