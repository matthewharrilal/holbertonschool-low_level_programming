#include "main.h"

size_t print_dlistint(const dlistint_t *h)
{
	current = h;
	size_t counter;

	counter = 0
	while (current)
	{
		printf("%d\n", current->n);
		counter++;
		current = current->next;
	}

	return counter
}
