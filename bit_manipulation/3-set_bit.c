#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (CHAR_BIT * sizeof(unsigned int)))
	{
		return -1;		
	}

	mask = *n & (1 << index );
	*n ^= mask;

	return *n;
