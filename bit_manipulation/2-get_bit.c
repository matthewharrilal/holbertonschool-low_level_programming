#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	return n & (1UL << (index - 1)) ? 1 : 0;
}
