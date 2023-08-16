#include "main.h"

#include <stdio.h>

int _strlen_recursion(char *s)
{
	int counter;

	if (*s != '\0')
	{
		_strlenrecursion(++s);
		counter++;
	}

	return counter;
}
