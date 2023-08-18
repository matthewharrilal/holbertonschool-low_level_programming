#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrPointer;
	int *castingPointer;
	unsigned int index;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}

	arrPointer = malloc(nmemb * size);

	/* Cast to char pointer
	 *
	 * For pointer arithmetic to be able to iterate through
	 *
	 * Then zero it out
	 *  */

	index = 0;
	castingPointer = (int *)arrPointer;

	for (index = 0; index < (nmemb * size); index++)
	{
		castingPointer[index] = 0;
	}
	return castingPointer;
}
