#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		exit(98);
	}

	if (head == NULL || *head == NULL)
        {
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
                *head = newNode;
                return newNode;
        }

	newNode->n = n;

	newNode->next = *head;
	newNode->prev = NULL;

	(*head)->prev = newNode;
	*head = newNode;

	return newNode;
}
