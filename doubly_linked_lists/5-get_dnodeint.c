#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	unsigned int counter;
	dlistint_t *current;

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
		counter++;
		current = current->next;
	}


	return NULL;
}
