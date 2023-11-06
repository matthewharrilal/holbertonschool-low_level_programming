#include "lists.h"


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int currentIndex;
	dlistint_t *newNode;
	/* dlistint_t *temp; */
	dlistint_t *prev;


	current = *h;
	newNode = malloc(sizeof(dlistint_t));
	currentIndex = 0;	

	if (newNode == NULL)
	{
		return NULL;
	}	
	newNode->n = n;

	if (h == NULL || *h == NULL)
	{
		*h = newNode;
		newNode->next = NULL;
		newNode->prev = NULL;
		return newNode;
	}

	if (idx == 0)
	{	
		*h = newNode;
		newNode->next = current;
		newNode->prev = NULL;

		current->prev = newNode;
		return newNode;
	}


	while (current)
	{
		prev = current->prev;
		if (currentIndex == idx)
		{

			prev->next = newNode;
			newNode->prev = prev;
			newNode->next = current;
			current->prev = newNode;		
		}

		currentIndex++;
		current = current->next;
	}	

	if (currentIndex == idx)
	{
		prev = current->prev;
		prev->next = newNode;
		newNode->next = current;
		newNode->prev = prev;


	} else if (idx > currentIndex)
	{
		
		/*
		current->next = newNode;
		newNode->prev = current;
		newNode->next = NULL;
		*/
		return NULL;
	}

	return newNode;
}
