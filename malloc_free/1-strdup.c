#include "main.h"

#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *copy;
	size_t size;
	size_t index;

	if (str == NULL)
	{
		return NULL;
	}

	size = 0;

	while (*str)
	{
		size++;
		str++;
	}

	copy = (char *)malloc(size * sizeof(char));

	for (index = 0; index < size; index++)
	{
		copy[index] = str[index];
	}

	if (copy == NULL)
	{
		return NULL;
	}

	return copy;
}
