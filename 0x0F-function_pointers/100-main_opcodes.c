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
	int numbytes, i;
	char *opc;

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

	opc = (char *)main;

	for (i = 0; i < numbytes; i++)
	{
		if (i == numbytes - 1)
		{
			printf("%02hhx\n", opc[i]);
			break;
		}
		printf("%02hhx ", opc[i]);
	}
	return (0);
}
