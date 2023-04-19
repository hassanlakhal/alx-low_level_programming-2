#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints op codes
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int numbytes, h;
	char *ayh;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numbytes = atoi(argv[1]);

	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ayh = (char *)main;

	for (h = 0; h < numbytes; h++)
	{
		if (h == numbytes - 1)
		{
			printf("%02hhx\n", ayh[h]);
			break;
		}
		printf("%02hhx", ayh[h]);
	}
	return (0);
}
