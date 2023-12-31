#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void free_listint2(listint_t **head)
{

	listint_t *temp;
	if (*head == NULL || head == NULL)
	{
		printf("Freed !\n");
		return;
	}

	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
