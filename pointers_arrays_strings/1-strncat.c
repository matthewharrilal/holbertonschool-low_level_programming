#include "main.h"

#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int index;
	size_t sourceLength;
	size_t destinationLength;

	destinationLength = strlen(dest);
	sourceLength = strlen(src);
	
	for (index = destinationLength; index <= ((int)destinationLength - 1 + n); index++)
	{
		dest[index] = src[index - destinationLength];
	}

	return dest;

:}
