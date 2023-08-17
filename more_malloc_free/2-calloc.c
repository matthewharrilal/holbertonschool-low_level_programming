#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrPointer;
	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}

	arrPointer = malloc(nmemb * size);

	if (arrPointer == NULL)
	{
		return NULL;
	}
	return arrPointer;
}
