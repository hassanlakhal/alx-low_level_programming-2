#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - addition of a and b
 * @a: first input
 * @b: other input
 * Return: returns the add sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction of a and b
 * @a: first input
 * @b: other input
 * Return: returns the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of a and b
 * @a: first input
 * @b: other input
 * Return: returns the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b
 * @a: first input
 * @b: other input
 * Return: returns the result of the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulo of a and b
 * @a: first input
 * @b: other input
 * Return: returns the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
