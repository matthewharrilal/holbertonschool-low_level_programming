#include "main.h"

#include <stdio.h>

void _puts_recursion(char *s)
{
	void _puts_recursion(char *s)
        if (*s != '\0')
        {
                putchar(*s);
                _puts_recursion(++s);
        } else
	{
		printf("\n");
	}
}
