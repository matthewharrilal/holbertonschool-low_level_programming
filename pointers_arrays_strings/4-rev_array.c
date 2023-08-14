#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void reverse_array(int *a, int n)
{
	int index;

	index = 0;

	int *copy;
    	copy = (int *)malloc(n * sizeof(int));
  

	int copyIndex;
	
	for (copyIndex = 0; copyIndex < n; copyIndex++)
	{
		copy[copyIndex] = a[copyIndex];
	}
	
	do 
	{
                *a = copy[(n - 1) - index];
                index++;
                a++;
	} while (index < n);
}
