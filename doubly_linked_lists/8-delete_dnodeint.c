#include "lists.h"


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int counter;
	dlistint_t *prev;

	if (head == NULL || *head == NULL)
	{
		return -1;
	}

	counter = 0;
	current = *head;

	if (counter == index)
	{
		*head = current->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return 1;
	}

	while (current != NULL)
	{
		

		if (index == counter)
		{
			prev->next = current->next;
			
			if (current->next != NULL)
			{
				current->next->prev = prev;
			}		

	
			current->prev = NULL;
			current->next = NULL;
			free(current);
			return 1;
		}
	
		prev = current;
		current = current->next;
		counter++;		
	}


	if (index == counter)
	{
	
		prev->next = NULL;
		return 1;
	}

	return -1;
}
