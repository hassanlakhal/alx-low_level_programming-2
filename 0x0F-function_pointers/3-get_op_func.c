#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s: prog argument
 * Return: pointer to op
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int h = 0;

	while (h < 5)
	{
		if (*s == *ops[h].op)
			return (ops[h].f);
		h++;
	}
	return (0);
}
