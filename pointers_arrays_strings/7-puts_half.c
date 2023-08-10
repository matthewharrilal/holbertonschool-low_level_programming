#include "main.h"

#include <stdio.h>
#include <string.h>


void puts_half(char *str)
{
	size_t i; 
	size_t lengthOfString;

	lengthOfString = strlen(str);

	for (i = (lengthOfString / 2); i <= (lengthOfString - 1); i++)
	{
		putchar(str[i]);
	}	
}
