#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *current;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		exit(98);
	}

	current = *head;

	while (current->next)
	{
		current = current->next;
	}

	newNode->prev = current;
	current->next = newNode;
	newNode->next = NULL;

	return newNode;
}
