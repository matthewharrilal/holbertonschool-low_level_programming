#include "main.h"

#include <stdio.h>

void set_string(char **s, char *to)
{
	char *temp; 
	temp = *s;
	*s = to;
	to = temp;
}
