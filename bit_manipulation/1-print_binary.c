#include "main.h"
#include <limits.h>
#include <stdbool.h>

void print_binary(unsigned long int n)
{
        int index;
	bool firstSetBit;

	if (n == 0)
	{
		putchar('1');
		return;
	}

        firstSetBit = false;
        for (index = CHAR_BIT * sizeof(unsigned long int) - 1; index >= 0; index--)
        {
                if (n & (1UL << index))
                {
                        putchar('1');
                        firstSetBit = true;
                } else if (firstSetBit)
                {
                        putchar('0');
                }
        }
}
