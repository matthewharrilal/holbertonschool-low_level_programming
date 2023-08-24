#include "main.h"

#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	int index;
	int placeCounter;
	unsigned int sum;
	int currentNum;

	if (b == NULL)
	{
		return 0;
	} else if (strlen(b) == 1)
	{
		return 1;
	}
	index = 0;
	placeCounter = strlen(b) * 2; /* Used to deterimine the max eponent we raise to given we read left to right  */
	sum = 0;

	while (b[index])
	{
		currentNum = b[index] - '0';
		if (currentNum == 1)
		{
			sum += (currentNum ^ placeCounter);		
		} else if (currentNum != 0)
		{
			return 0;
		}

		index++;
		placeCounter /= 2;
	}

	return sum;
}
