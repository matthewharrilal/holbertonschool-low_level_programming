#include "main.h"

#include <stdio.h>
#include <string.h>

int _strcmp(char *s1, char *s2)
{
	// You can increment pointers via i.e s1++
	
	while (s1 != '\0' && s2 != '\0')
	{
		if (*s1 < *s2)
		{
			return (-1);
		} else if (*s1 > *s2)
		{
			return (1);
		} else {
			return (0);
		}

		s1++;
		s2++;
	}

	// Checks last character for null operator/space or remaining characters after while loop
	
	if (*s1 < *s2)
	{
		return (-1);
	} else if (*s1 > *s2)
	{
		return (1);
	} else
	{
		return (0);
	}
}
