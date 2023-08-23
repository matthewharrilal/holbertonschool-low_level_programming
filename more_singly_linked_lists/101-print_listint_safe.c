#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow;
	const listint_t *fast;
	int counter;
	
	counter = 0;

	if (head == NULL)
	{
		exit(98);
	}

	slow = head;
	fast = head->next;
	while (slow != NULL && fast->next != NULL)
	{
		if (slow == fast)
		{
			exit(98);
		}

		printf("%p %d\n", (void *)current, current->n);
		slow = slow->next;
		fast = fast->next->next;
		counter++;
	}

	return counter;
}
