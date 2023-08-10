#include "main.h"

#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int iterator;
	int lengthOfString;

	lengthOfString = strlen(s);

	for (iterator = lengthOfString - 1; iterator >= 0; iterator--)
	{
		s[iterator] = s[lengthOfString - iterator];
	}
}
