#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints all the numbers of base 16 in lowercase'
 *Return: Always 0
 */

	int main(void)
	{
		char i = '0';
		char k = 'a';

		while (i <= '9')
		{
			putchar(i);
			i++;
		}
		while (k < 'g')
		{
			putchar(k);
			k++;
		}
			putchar('\n');
	return (0);
	}
