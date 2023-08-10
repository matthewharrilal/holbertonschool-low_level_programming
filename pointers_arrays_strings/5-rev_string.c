#include "main.h"

#include <stdio.h>
#include <string.h>

void rev_string(char *s)
{
	int start;
	char temp;
	int end;
	int lengthOfString;

	lengthOfString = strlen(s);

	for (start = 0, end = lengthOfString - 1; iterator >= 0; iterator--)
	{	
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
