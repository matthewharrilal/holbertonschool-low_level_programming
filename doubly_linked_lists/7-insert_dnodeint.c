#include "lists.h"


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int currentIndex;
	dlistint_t *newNode;
	/* dlistint_t *temp; */
	dlistint_t *prev;

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

	if (idx == 0)
	{	
		*h = newNode;
		newNode->next = current;
		newNode->prev = NULL;

		current->prev = newNode;
		return newNode;
	}


	while (current->next)
	{
		temp = current->next;
		prev = current->prev;
		if (currentIndex == idx)
		{

			prev->next = newNode;
			newNode->prev = prev;
			newNode->next = current;
			current->prev = newNode;		

			/*
			current->next = newNode;
			newNode->prev = current;
			newNode->next = temp;
			temp->prev = newNode;
			*/ 	
		}

		currentIndex++;
		current = current->next;
	}	

	if (currentIndex == idx)
	{
		current->next = newNode;
		newNode->prev = current;
		newNode->next = NULL;
	} else if (idx > currentIndex)
	{
		return NULL;
	}

	return newNode;
}
