#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t *prev;
	listint_t *current;
	listint_t *next;

	unsigned int counter;

	if ((int)index < 0)
	{
		return -1;
	}

	if (head == NULL)
	{
		return -1;
	}

	prev = *head;
	current = *head;
	counter = 0;

	if ((int)index == 0)
	{
		if (current->next)
		{
			*head = current->next;
			free(current);
			return 1;
		} else {
			*head = NULL;
			return 1;
		}
	}

	while (current->next)
	{

		if (counter == index)
		{ 
			next = current->next;
			prev->next = next;
			free(current);
			return 1;
		}
		
		prev = current;
		current = current->next;
		counter++;
	}

	
	if (counter == index)
	{
		prev->next = NULL;
		free(current);
		return 1;
	}

	return -1;i
}
