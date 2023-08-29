#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = ~(1UL << index)
	*n = (unsigned long int)(*n & mask);
	return 1;
}
