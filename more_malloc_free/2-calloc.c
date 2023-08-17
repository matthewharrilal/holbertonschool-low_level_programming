#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrPointer;
	int index;
	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}

	arrPointer = malloc(nmemb);

	if (arrPointer == NULL)
	{
		return NULL;
	}

	index = 0;
	while (arrPointer[index])
	{
		arrPointer[index] = (unsigned int *)malloc(size * sizeof(unsigned int));
		index++;
	}

	return arrPointer;
}
