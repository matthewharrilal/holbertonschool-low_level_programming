#include "main.h"

#include <stdio.h>

void times_table(void)
{
	int digit;

	for (digit = 0; digit < INT_MAX; digit++)
	{
		printf("%d", 9 * digit);
	}
}
