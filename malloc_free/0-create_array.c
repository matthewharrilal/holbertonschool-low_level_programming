#include "main.h"

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{	
	char *characters;

	if (size == 0)
	{
		return NULL;
	}

	characters = (char *)malloc(size * sizeof(char));

	if (characters == NULL)
	{
		return NULL;
	}

	characters[0] = c;
	return characters;
}
