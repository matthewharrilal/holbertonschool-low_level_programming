#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	list_t *current;

	current = head;
	while (head)
	{
		current = head;
		free(head);
		head = current->next;
	}

	free(head);
	free(current);
}
