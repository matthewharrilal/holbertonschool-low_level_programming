#include "main.h"

#include <stdio.h>

int _strlen_recursion(char *s)
{
	int counter;

	if (counter == NULL)
	{
		counter = 0;
	}

	if (*s != '\0')
	{
		_strlen_recursion(++s);
		return counter++;
	}
}
