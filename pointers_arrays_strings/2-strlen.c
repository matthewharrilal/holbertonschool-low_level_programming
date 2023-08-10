#include "main.h"

#include <stdio.h>
#include <string.h>


int _strlen(char *s)
{
	char *dereferencedStr;

	*dereferencedStr = *s;
	return (strlen(*dereferencedStr));
}
