#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int pop_listint(listint_t **head)
{
	listint_t *temp;
	temp = *head;

	if (*head == NULL)
	{
		return 0;
	}

	*head = temp->next;
	temp = NULL;
}
