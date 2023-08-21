#include "3-calc.h"

#include <stdio.h>

int (*get_op_func(char *s))(int first, int second)
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

    while (ops[i].op != NULL)
    {
	if (s == ops[i].op)
	{
		return ops[i].f(first, second);
	}
    	i++;
    }

    return NULL;
}
