#include "main.h"

#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	int index;
	int placeCounter;
	unsigned int sum;

	index = 0;
	placeCounter = 32;
	sum = 0;

	while (b[index])
	{
		if (atoi(*b[index]) == 1)
		{
			sum += (*b[index])^ placeCounter;		
		} else if (atoi(*b[index]) != 0)
		{
			return 0;
		}

		index++;
		placeCounter /= 2;
	}

	return sum;
}
