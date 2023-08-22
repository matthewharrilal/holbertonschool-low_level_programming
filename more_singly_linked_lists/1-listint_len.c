#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t listint_len(const listint_t *h)
{
	size_t counter;
	listint_t current;

	counter = 0;
	current = h;

	while (current)
	{
		counter++;
		current = current->next;
	}

	return counter;
}
