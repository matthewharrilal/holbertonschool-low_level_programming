#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return 0;
	}

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return n;
}
