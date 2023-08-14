#include "main.h"

#include <stdio.h>
#include <stdbool.h>

char *cap_string(char *c)
{
	bool foundSpace;

        foundSpace = false;

	if ((*c >= 'A') && (*c <= 'Z') || (*c >= 'a' && *c <= 'z'))
	{
		*c = *c - ('a' - 'A');
	}
	
        while (*c != '\0')
        {
                if (foundSpace == true && *c != ' ')
                {
                        if ('a' <= *c && *c <= 'z')
                        {
                                *c = *c - ('a' - 'A');
                        }

                        foundSpace = false;
                }

                if (*c == ' ' || *c == '\t')
                {
                        foundSpace = true;
                }
                c++;
        }
        return (c);
}
