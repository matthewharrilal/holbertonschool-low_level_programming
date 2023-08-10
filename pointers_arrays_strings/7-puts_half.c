#include "main.h"

#include <stdio.h>
#include <string.h>


void puts_half(char *str)
{
	size_t i; 

	for (i = 0; i < (strlen(str) / 2); i++)
	{
		putchar(str[i]);
	}	
}
