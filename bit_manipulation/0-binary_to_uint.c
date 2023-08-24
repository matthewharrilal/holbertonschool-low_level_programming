#include "main.h"

#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	int index;
	int placeCounter;
	unsigned int sum;
	int currentNum;

	index = 0;
	placeCounter = 32;
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
