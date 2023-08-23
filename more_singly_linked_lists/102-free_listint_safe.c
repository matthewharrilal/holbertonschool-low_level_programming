#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	listint_t *temp;
	size_t counter;

	if (h == NULL || *h == NULL)
	{
		return (size_t)0;
	}

	current = *h;
	counter = 0;

	while (current)
	{
		temp = current;
	
		current = current->next;
		free(temp);
		counter++;	
	}

	*head = NULL;
	free(current);
	return counter;
}
