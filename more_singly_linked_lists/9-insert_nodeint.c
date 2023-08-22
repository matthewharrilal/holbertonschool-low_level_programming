#include "lists.h"

#include <stdio.h>
#include <stdlib.h>

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *newNode;
	listint_t *temp;
	listint_t *prev;
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
	prev = *head;
	counter = 0;

	if (idx == 0)
	{
		temp = *head;
		*head = newNode;
		newNode->next = temp;
		return newNode;
	}

	while (current)
	{
		if (counter == idx)
		{
			temp = current;
			prev->next = newNode;
			newNode->next = temp;
			return newNode;
		}

		counter++;
		prev = current;
		current = current->next;
	}

	if (counter == idx)
	{
		current->next = newNode;
		newNode->next = NULL;
		return newNode;
	}

	free(newNode);
    	return NULL;
}
