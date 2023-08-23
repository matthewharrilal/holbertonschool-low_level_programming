#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;

	if (head == NULL || *head == NULL)
	{
		return NULL;
	}

	prev = NULL;
	current = *head;
	while (current->next)
	{
		*head = current->next; /* We utilize head as our temp to save reference to the rest of the list  */
		current->next = prev;

		prev = current;
		current = *head;
	}

	current->next = prev;
	*head = current;
	return current;
}


/* This approach is if we can allocate three variables
 *
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *current;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return NULL;
	}

	prev = NULL;
	current = *head;
	while (current->next)
	{
		temp = current->next;
		current->next = prev;

		prev = current;
		current = temp;
	}

	* When we exit out of the while loop current will be null therefore prev holds our last node in the original list (head of the new reversed list)   *
	*head = prev;
	return prev;
} */
