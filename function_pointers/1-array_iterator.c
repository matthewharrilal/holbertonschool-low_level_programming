#include "function_pointers.h"

#include <stdio.h>

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;
	if (action == NULL || array == NULL)
	{
		return;
	}

	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}
