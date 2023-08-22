#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Save the current head
	 * Set next of new node to head
	 * Set head to new node so that newNode isn't orphaned out remember *head is just a pointer to the actual node
	 */

	listint_t *newNode;
	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return NULL;
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode; 

	return newNode;
}
