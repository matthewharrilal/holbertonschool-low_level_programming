#include "main.h"

#include <stdio.h>

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}

	return factorial(--n);
}
