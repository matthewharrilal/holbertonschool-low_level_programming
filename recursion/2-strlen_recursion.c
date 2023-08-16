#include "main.h"

#include <stdio.h>

int _strlen_recursion(char *s)
{
	int counter;

	if (*s != '\0')
	{
		_strlen_recursion(++s);
		counter++;
	}

	return counter;
}
