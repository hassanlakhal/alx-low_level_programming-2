#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - printing strings followed by a new line
 * @separator: string being printed between strings
 * @n: number of strings
 * @...: variable number
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	char *hj;
	unsigned int j;

	va_start(va, n);

	for (j = 0; j < n; j++)
	{
		hj = va_arg(va, char *);

		if (hj)
			printf("%s", hj);
		else
			printf("(nil)");

		if (j < n - 1)
			if (separator)
				printf("%s", separator);
	}

		printf("\n");
		va_end(va);
}
