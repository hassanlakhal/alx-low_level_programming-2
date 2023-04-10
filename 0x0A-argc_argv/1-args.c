#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints te number
 * of arguments passed onto it
 * @argc: the count of arguments
 * @argv: string of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));

	return (0);
}
