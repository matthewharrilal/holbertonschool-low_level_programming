#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (current)
	{
		free(current);
		current = current->next;  
	}

	free(head);
}
