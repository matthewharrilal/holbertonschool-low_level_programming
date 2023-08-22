#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void free_listint(listint_t *head)
{
	listint_t *temp

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp->n);
		free(temp);
	}
}
