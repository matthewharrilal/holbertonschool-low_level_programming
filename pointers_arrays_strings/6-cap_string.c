#include "main.h"

#include <stdio.h>
#include <stdbool.h>

char *cap_string(char *c)
{
	bool foundSpace;

        foundSpace = false;
        while (*c != '\0')
        {
                if (foundSpace == true)
                {
                        if ('a' <= *c && *c <= 'z')
                        {
                                *c = *c - ('a' - 'A');
                        }

                        foundSpace = false;
                }

                if (*c == ' ')
                {
                        while (*c == ' ')
			{
				foundSpace = true;
				c++;
			}
                }

                c++;
        }
        return (c);
}
