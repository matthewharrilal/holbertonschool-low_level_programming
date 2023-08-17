#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *pointer = NULL;

	/* pointer = (unsigned int *)malloc(b * sizeof(unsigned int)); */

	pointer = malloc(b);

	if (pointer == NULL)
	{
		exit(98);
	}

	return pointer;
}
