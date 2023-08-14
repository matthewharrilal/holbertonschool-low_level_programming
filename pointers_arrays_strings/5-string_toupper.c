#include "main.h"

#include <stdio.h>

char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		*c = *c - ('a' - 'A');
		c++;
	}
	return c;
}
