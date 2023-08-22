#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	/* While the current node exists  */
	while (*h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		} else
		{
			printf("[%d] %s", h->len, h->str);
		}
		h = h->next;
		counter++;
	}

	return counter;
}
