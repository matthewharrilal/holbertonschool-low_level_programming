#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t current;
	size_t counter;

	current = h;
	counter = 0;

	while (current)
	{
		printf("%d\n", current->n);
		counter++;
		current = current->next;
	}

	return counter
}
