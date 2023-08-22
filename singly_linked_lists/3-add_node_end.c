#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


list_t *add_node_end(list_t **head, const char *str)
{
	char *strDuplicate;
	list_t *newNode;
	list_t *current;

	if (head == NULL || str == NULL)
	{
		return NULL;
	}

	strDuplicate = strdup(str);
	if (strDuplicate == NULL)
	{
		free(strDuplicate);
		return NULL;
	}

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		free(newNode);
		return NULL;
	}

	newNode->str = strDuplicate;
	newNode->len = strlen(strDuplicate);
	newNode->next = NULL;

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = newNode;
	return newNode;
}
