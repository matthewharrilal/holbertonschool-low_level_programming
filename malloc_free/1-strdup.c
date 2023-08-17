#include "main.h"

#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *copy;
	size_t size;

	if (str == NULL)
	{
		return NULL;
	}

	while (*str)
	{
		size++;
		str++;
	}

	copy = (char *)malloc(size * sizeof(char));

	if (copy == NULL)
	{
		return NULL;
	}

	return copy;
}
