#include "lists.h"

int sum_dlistint(dlistint_t *head)
{

	int sum;
	dlistint_t *current;


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
