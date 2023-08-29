#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (0 << index);
	return 1;
}
