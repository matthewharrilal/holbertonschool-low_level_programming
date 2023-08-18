#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *collectionPointer;
	int index;
	int secondaryIndex;

	if (min > max)
	{
		return NULL;
	}

	collectionPointer = (int *)malloc((max - min + 1) * sizeof(int));
	
	if (collectionPointer == NULL)
	{
		return NULL;
	}
	secondaryIndex = 0;
	for (index = min; index < (max - min + 1); index++)
	{
		collectionPointer[secondaryIndex] = index;
		secondaryIndex ++;
	}

	return collectionPointer;
}


