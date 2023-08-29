#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (CHAR_BIT * sizeof(unsigned long int)))
	{
		return -1;
	}

	mask = ~(1UL << index);
	*n = *n & mask;
	return 1;
}
