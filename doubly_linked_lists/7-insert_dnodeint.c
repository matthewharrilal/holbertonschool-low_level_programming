#include "lists.h"


/* dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	unsigned int currentIndex;
	dlistint_t *newNode;
	dlistint_t *temp;
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
		newNode->next = current;
		newNode->prev = NULL;

		current->prev = newNode;
		*h = newNode;
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
			return newNode;		
		}

		currentIndex++;
		current = current->next;
	}	

	if (currentIndex == idx)
	{
    		if (current) 
		{
        		prev->next = newNode;
        		newNode->prev = prev;
        		newNode->next = current;
        		current->prev = newNode;
    		}
	 	else 
		{
        		prev->next = newNode;
        		newNode->prev = prev;
        		newNode->next = NULL;
    		}
	}
	return newNode;
}

*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (h == NULL)
        return NULL;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *h;
        if (*h != NULL)
            (*h)->prev = new_node;
        *h = new_node;
        return new_node;
    }

    current = *h;
    for (i = 0; i < idx - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        free(new_node);
        return NULL;
    }

    new_node->prev = current;
    new_node->next = current->next;

    if (current->next != NULL)
        current->next->prev = new_node;

    current->next = new_node;

    return new_node;
}
