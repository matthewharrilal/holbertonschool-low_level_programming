#include "main.h"

#include <stdio.h>

int print_last_digit(int num)
{
	char str[200]; 
	int lengthOfString;
	sprintf(str, "%d", num);

	lengthOfString = strlen(num);
	return str[lengthOfString - 1] - '0';
}
