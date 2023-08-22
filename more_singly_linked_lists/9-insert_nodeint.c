#include "lists.h"

#include <stdio.h>
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *newNode;
	listint_t *temp;
	unsigned int counter;

	if (*head == NULL || head == NULL)
	{
		return NULL;
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return NULL;
	}

	newNode->n = n;
	
	current = *head;

	while (current->next)
	{
		if (counter == idx)
		{
			temp = current->next;
			current->next = newNode;
			newNode->next = temp;
		}

		counter++;
		current = current->next;
	}

	return newNode;
}
