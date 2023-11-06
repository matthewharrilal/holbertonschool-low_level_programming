#include "lists.h"


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int currentIndex;
	dlistint_t *newNode;
	dlistint_t *temp;

	if (h == NULL || *h == NULL)
	{
		return NULL;
	}

	current = *h;
	newNode = malloc(sizeof(dlistint_t));
	currentIndex = 0;	

	if (newNode == NULL)
	{
		return NULL;
	}	
	newNode->n = n;	


	while (current->next)
	{
		temp = current->next;
		if (currentIndex == idx)
		{
			current->next = newNode;
			newNode->prev = current;
			newNode->next = temp; 	
		}

		currentIndex++;
		current = current->next;
	}	

	if (currentIndex == idx)
	{
		current->next = newNode;
		newNode->prev = current;
		newNode->next = NULL;
	}

	return newNode;
}
