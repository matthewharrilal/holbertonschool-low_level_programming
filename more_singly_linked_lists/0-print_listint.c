#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t counter;

	current = h;
	counter = 0;	

	while (current)
	{
		printf("%d\n", current->n );
		counter++;
		current = current->next;
	}

	return counter;
}
