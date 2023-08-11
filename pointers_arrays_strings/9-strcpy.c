#include "main.h"

#include <stdio.h>
#include <string.h>

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}

	return (dest);
}
