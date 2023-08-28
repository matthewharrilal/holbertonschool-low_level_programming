#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (CHAR_BIT * sizeof(unsigned int)))
	{
		return -1;		
	}

	*n & (1UL << index);

	return *n;
}
