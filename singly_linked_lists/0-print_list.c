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
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		} else
		{
			printf("[%d] %s", h->len, h->str);
		}
		current = current->next;
		counter++;
	}

	return counter;
}
