#include "lists.h"

#include <stdio.h>
#include <stdlib.h>

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	int counter;

	if (head == NULL)
	{
		return NULL;
	}

	current = head;
	counter = 0;
	while (current)
	{
		if (counter == index)
		{
			return current;
		}
		counter++
		current = current->next;
	}

	return NULL;
}
