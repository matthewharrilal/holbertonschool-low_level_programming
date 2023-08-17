#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatPointer;
	size_t index;
	size_t secondaryIndex;
	size_t firstLength;
	
	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	
	firstLength = strlen(s1);
	concatPointer = (char *)malloc(((int)firstLength + n + 1) * sizeof(char));

	if (concatPointer == NULL)
	{
		return NULL;
	}


	for (index = 0; index < (firstLength + 1); index++)
	{
		concatPointer[index] = s1[index];
	}

	secondaryIndex = 0;
	for (index = firstLength; index < ((int)firstLength + n); index++)
	{
		concatPointer[index] = s2[secondaryIndex];
		secondaryIndex++;
	}

	return concatPointer;
}
