#include "main.h"

#include <stdio.h>
#include <string.h>


void puts_half(char *str)
{
	size_t i; 
	int lengthOfString;

	lengthOfString = strlen(str)

	for (i = lengthOfString - 1; i > (lengthOfString / 2); i--)
	{
		putchar(str[i]);
	}	
}
