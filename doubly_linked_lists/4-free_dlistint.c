#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current->prev = NULL;
		current = next;  
	}

	free(head);
}
