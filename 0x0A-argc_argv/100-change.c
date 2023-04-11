#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc: the count of arguments
 * @argv: string of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int money, ryal, numberofcoins;
	int coins[5] = {25, 10, 5, 2, 1};

	numberofcoins = 0;
	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money > 0)
		{
			for (ryal = 0; ryal < 5; ryal++)
			{
				if ((money - coins[ryal]) >= 0)
				{
					money -= coins[ryal];
					numberofcoins++;
					ryal--;
				}
			}
		}
		printf("%d\n", numberofcoins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
