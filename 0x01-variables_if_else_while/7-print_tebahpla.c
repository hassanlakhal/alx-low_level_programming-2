#include <stdio.h>
/**
 *main - Entry point
 *Description: 'prints the lowercase alphabets in reverse'
 *Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
