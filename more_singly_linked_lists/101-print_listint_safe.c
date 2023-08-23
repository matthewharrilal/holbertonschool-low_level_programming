#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t print_listint_safe(const listint_t *head)
{
	listint_t *current;
	int counter;
	
	counter = 0;

	if (head == NULL)
	{
		exit(98);
	}
	while (current)
	{
		printf("%p %d\n", current, current->n);
		current = current->next;
		counter++;
	}

	return counter;
}
