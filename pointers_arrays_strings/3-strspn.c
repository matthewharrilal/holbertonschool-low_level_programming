#include "main.h"

#include <stdio.h>
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;

	while (strchr(accept, *s))
	{
		count++;
		s++;
	}
	return count;	
}
