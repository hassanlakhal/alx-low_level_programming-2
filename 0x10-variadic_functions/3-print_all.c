#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: list of types of arguments
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list va;
	char *hj;
	const char t_arg[] = "cifs";
	unsigned int h = 0, m, c = 0;

	va_start(va, format);
	while (format && format[h])
	{
		m = 0;
		while (t_arg[m])
		{
			if (format[h] == t_arg[m] && c)
			{
				printf(", ");
				break;
			} m++;
		}
		switch (format[h])
		{
			case 'c':
				printf("%c", va_arg(va, int)), c = 1;
				break;
			case 'i':
				printf("%d", va_arg(va, int)), c = 1;
				break;
			case 'f':
				printf("%f", va_arg(va, double)), c = 1;
				break;
			case 's':
				hj = va_arg(va, char *), c = 1;
				if (!hj)
				{
					printf("(nil)");
					break;
				}
				printf("%s", hj);
				break;
		} h++;
	}
	printf("\n"), va_end(va);
}
