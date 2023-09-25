#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - gets a required function for operation given the operator
 * @s: pointer to the character(operator)
 * Return: A pointer to matching function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while(ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
