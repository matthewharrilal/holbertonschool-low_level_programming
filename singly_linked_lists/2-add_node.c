#include "lists.h"

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *strDuplicate;

	newNode = malloc(sizeof(list_t));
	strDuplicate = strdup(str);
	
	if (newNode == NULL)
	{
		free(newNode);
		return NULL;
	}
		
	if (strDuplicate == NULL)
	{
		free(strDuplicate);
		return NULL;
	}

	newNode->str = strDuplicate;
	newNode->len = strlen(strDuplicate);
	newNode->next = *head;

	*head = newNode;
	
	return newNode;
}
