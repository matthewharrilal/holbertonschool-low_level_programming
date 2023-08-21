#include "function_pointers.h"

#include <stdio.h>

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		while (*name)
		{
			putchar(*name);
			name++
		}
		return;
	}

	f(name);
}
