#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *a, int n)
{
	int index;
	int *copy;
	int copyIndex;

	index = 0;
    	copy = (int *)malloc(n * sizeof(int));
	for (copyIndex = 0; copyIndex < n; copyIndex++)
	{
		copy[copyIndex] = a[copyIndex];
	}
	
	while (index < n) 
	{
                *a = copy[(n - 1) - index];
                index++;
                a++;
	}
}
