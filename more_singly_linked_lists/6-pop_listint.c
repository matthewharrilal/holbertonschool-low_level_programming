#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	temp = *head;
	n = temp->n;
	if (*head == NULL)
	{
		return 0;
	}

	*head = temp->next;
	temp = NULL;
	return n;
}
