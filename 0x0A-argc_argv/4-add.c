#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: The count of arguments
 * @argv: string of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int tot = 0;

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int h;

		for (h = 0; arg[h] != '\0'; h++)
		{
			if (arg[h] < '0' || arg[h] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		tot += atoi(argv[i]);
	}
	printf("%d\n", tot);
	return (0);
}
