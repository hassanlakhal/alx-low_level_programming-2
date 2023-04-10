#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: the count of arguments
 * @argv: string of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	int h;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		i = atoi(argv[1]);
		h = atoi(argv[2]);

		printf("%d\n", i * h);

	return (0);
}
