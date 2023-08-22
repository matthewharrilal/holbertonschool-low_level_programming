#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL)
	{
		return 0;
	}

	current = head;
	sum = 0;

	while (current)
	{
		sum += current->n;	
		current = current->next;
	}

	return sum;
}
