#include "main.h"

#include <stdio.h>

char *_strcpy(char *dest, char *src)
{
	strcpy(*dest, *src);
	return dest;
}
