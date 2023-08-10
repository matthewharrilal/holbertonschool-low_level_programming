#include "main.h"

#include <stdio.h>
#include <string.h>

void print_rev(char *s)
{
	int lengthOfString;
	int iterator;

	lengthOfString = strlen(s);

	for (iterator = lengthOfString - 1; iterator >= 0; iterator--)
	{
		putchar(s[iterator]);
	}
}
