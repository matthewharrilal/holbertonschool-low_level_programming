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

	while (str[size])
	{
		size++;
	}

	/* Accounting for null terminating operator */
	copy = (char *)malloc((size + 1) * sizeof(char));

	if (copy == null)
	{
		return NULL;
	}

	for (index = 0; index <= size; index++)
	{
		copy[index] = str[index];
	}

	return copy;
}
