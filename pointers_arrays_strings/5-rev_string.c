#include "main.h"

#include <stdio.h>

void rev_string(char *s)
{
	int iterator;
	int lengthOfString;

	lengthOfString = strlen(s);

	for (iterator = lengthOfString - 1; iterator >= 0; iterator--)
	{
		s[iterator] = s[lengthOfString - iterator];
	}

	return (0);
}
