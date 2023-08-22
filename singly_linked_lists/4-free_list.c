#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void free_list(list_t *head)
{
	
	list_t *prev;
	if (head == NULL)
	{
		return;
	}

	prev = head;
	while (head)
	{
		prev = head;
		head = prev->next;
		free(prev)
	}

	free(head);
	free(prev);
}
