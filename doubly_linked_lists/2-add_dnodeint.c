#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	if (head == NULL || *head == NULL)
	{
		*head = newNode;
		return newNode;
	}

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		exit(98);
	}

	newNode->n = n;

	newNode->next = *head;
	newNode->prev = NULL;

	(*head)->prev = newNode;
	*head = newNode;

	return newNode;
}
