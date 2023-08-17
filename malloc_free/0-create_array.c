#include "main.h"

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return NULL;
	}

	char *characters 
	characters = (char *)malloc(size * sizeof(char));

	if (characters == NULL)
	{
		return NULL;
	}

	characters[0] = c;
	return characters;
}
