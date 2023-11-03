#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	int counter;
	dlistint_t *current;

	current = head;
	counter = 0;

	while (current)
	{
		if (counter == index)
		{
			return current;
		}
		current = current->next;
	}


	return NULL
}
