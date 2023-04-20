#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers -  printing numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of integers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int j;

	va_start(va, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(va, int));

		if (separator && j < n - 1)
			printf("%s", separator);
	}
		printf("\n");
		va_end(va);
}
