#include "lists.h"

#include <stdio.h>
#include <stddef.h>

size_t list_len(const list_t *h)
{
	const list_t current;
	int counter;

	current = h;
	counter = 0;

	while (current)
	{
		counter++;
		currrent = current->next;
	}

	return counter;
}
