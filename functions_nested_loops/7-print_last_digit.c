#include "main.h"

#include <stdio.h>
#include <string.h>

int print_last_digit(int num)
{
	char str[200]; 
	int lengthOfString;
	sprintf(str, "%d", num);

	lengthOfString = strlen(str);
	return str[lengthOfString - 1] - '0';
}
