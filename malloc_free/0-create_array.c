#include "main.h"

#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{	
	char *characters;
	int index;

	if (size == 0)
	{
		return NULL;
	}

	characters = (char *)malloc(size * sizeof(char));

	if (characters == NULL)
	{
		return NULL;
	}

	for (index = 0; index < size; index++)
	{
		characters[index] = c;
	}
	return characters;
}
