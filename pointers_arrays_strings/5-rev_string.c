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

	for (start = 0, end = lengthOfString - 1; start < end; start++, end--)
	{	
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
