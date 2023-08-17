#include "main.h"

#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int rIndex;
	int cIndex;
	int **nestedArray;

	if (width == 0 || height == 0)
	{
		return NULL;
	}

	nestedArray = (int **)malloc((height)  * sizeof(int));

	if (nestedArray == NULL)
	{
		return NULL;
	}

	for (rIndex = 0; rIndex < width; rIndex++)
	{	
		nestedArray[rIndex] = (int *)malloc(width * sizeof(int));
		
		if (nestedArray[rIndex] == NULL)
		{
			return NULL;
		}

		for (cIndex = 0; cIndex < height; cIndex++)
		{
			nestedArray[rIndex][cIndex] = 0;
		}
	}
	
	return nestedArray;
}
