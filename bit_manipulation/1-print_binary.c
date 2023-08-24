#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void print_binary(unsigned long int n)
{
	int index;
	unsigned long int *dynamicArray;

	if (n == 1)
	{
		putchar('1');
		return;
	} else if (n == 0)
	{
		putchar('0');
		return;
	}


	index = 0;
	dynamicArray = malloc(sizeof(unsigned long int));


	while (n > 0)
	{
		dynamicArray[index] = (n % 2); /* Every iteration we divide by 2 and that shifts us to the left as we transition left value should get smaller  */
		n /= 2;
	}

	printf("%p\n", (void *)dynamicArray);
	return;
}
