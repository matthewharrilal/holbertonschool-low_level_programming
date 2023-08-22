#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return NULL;
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL || head == NULL)
	{
		return newNode;
	}

	current = *head;

	while (current->next)
	{
		current = current->next;
	}

	current->next = newNode;
	return newNode;
}
