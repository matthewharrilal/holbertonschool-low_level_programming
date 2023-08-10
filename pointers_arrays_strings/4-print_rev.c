#include "main.h"

#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int lengthOfString;

	lengthOfString = strlen(s);

	for (int i = lengthOfString - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
}
