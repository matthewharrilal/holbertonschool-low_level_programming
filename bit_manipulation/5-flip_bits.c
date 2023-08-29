#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult; /* Compares two sequences and returns a 1 where two bits are different  */
	unsigned long int sizeOfUL;
	unsigned int counter;

	xorResult = n ^ m;
	counter = 0;

	/* Count set bits in xorResult to see how many bits were flipped due to previous operation  */
	while (xorResult > 0)
	{
		if (xorResult & 1)
		{
			counter += 1;
		}

		xorResult >>= 1;
	}

	return counter;
}
