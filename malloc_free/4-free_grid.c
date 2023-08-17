#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	int heightIndex;

	for (heightIndex = 0; heightIndex < height; heightIndex++)
	{
		free(*grid[heightIndex]);
	}

	free(grid);
}
