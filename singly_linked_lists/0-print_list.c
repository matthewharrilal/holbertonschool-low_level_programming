#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t print_list(const list_t *h)
{
	size_t counter;
	const list_t *current;

	current = h;
	counter = 0;
	/* While the current node exists  */
	while (current)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		counter++;
	}

	return counter;
}
