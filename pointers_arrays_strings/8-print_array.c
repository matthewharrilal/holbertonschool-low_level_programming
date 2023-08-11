#include "main.h"

#include <stdio.h>


void print_array(int *a, int n)
{
	int index;

	for (index = 0; index <= n; index++)
	{
		printf("%d\n", *a[index]);
	}
}
