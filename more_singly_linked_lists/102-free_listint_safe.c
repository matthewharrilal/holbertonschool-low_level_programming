#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t counter;

	if (head == NULL || *head == NULL)
	{
		return (size_t)0;
	}

	current = *head;
	counter = 0;

	while (current)
	{
		temp = current;
	
		current = current->next;
		free(temp->n);
		free(temp);
		counter++;	
	}

	free(current);
	return counter;
}
