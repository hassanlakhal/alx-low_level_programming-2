#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: parameter input
 * @...: variable number
 *
 * Return: return 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int j;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(va, n);

	for (j = 0; j < n; j++)
		sum += va_arg(va, int);

	va_end(va);
	return (sum);
}
