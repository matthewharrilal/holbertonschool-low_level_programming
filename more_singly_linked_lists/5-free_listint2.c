#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void free_listint2(listint_t **head)
{
	if (*head == NULL || head == NULL)
	{
		return NULL;
	}
	listint_t *temp;

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
