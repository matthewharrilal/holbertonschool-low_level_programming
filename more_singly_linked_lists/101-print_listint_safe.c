#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	int counter;
	
	counter = 0;

	if (head == NULL)
	{
		exit(98);
	}

	current = head;
	while (current)
	{
		printf("%p %d\n", (void *)current, current->n);
		current = current->next;
		counter++;
	}

	return counter;
}
