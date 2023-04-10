#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints its name
 * followed by a new line
 * @argc: the count of arguments
 * @argv: string of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
