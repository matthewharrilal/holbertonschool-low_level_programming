#include "main.h"

#include <stdio.h>

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+\n")
		return (1);
	} else if (n == 0)
	{
		printf("0\n")
		return (0);
	}

	printf("-\n")
	return (-1);
}
