#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow;
	listint_t *fast;

	slow = head;
	fast = head;

	if (head == NULL)
	{
		return NULL;
	}

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		
		if (slow == fast)
       	 	{	
            		slow = head;
            		while (slow != fast)
            		{		
                		slow = slow->next;
                		fast = fast->next;
            		}
            	return slow;
        	}
	}

	return NULL;
}
