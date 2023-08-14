#include "main.h"

#include <stdio.h>

char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (index =  0; index <= n; index++)
	{
		s[index] = b;
	}

	return (s);
}
