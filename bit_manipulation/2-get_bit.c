#include "main.h"
#include <limits.h>

int get_bit(unsigned long int n, unsigned int index)
{
	if (index == ULONG_MAX)
	{
		return -1;
	}
		
	return n & (1UL << (index)) ? 1 : 0;
}
