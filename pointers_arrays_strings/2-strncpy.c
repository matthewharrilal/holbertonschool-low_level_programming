#include "main.h"

#include <stdio.h>
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
	int index;
	for (index = 0; index <= n - 1; index++)
	{
		dest[index] = src[index];
	}	
	return dest;
}
