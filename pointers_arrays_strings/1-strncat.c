#include "main.h"

#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int index;
	size_t destinationLength;
	destinationLength = strlen(dest);
	
	for (index = destinationLength; index <= n; index++)
	{
		dest[index] = src[index - destinationLength];
	}

	return dest;

}
