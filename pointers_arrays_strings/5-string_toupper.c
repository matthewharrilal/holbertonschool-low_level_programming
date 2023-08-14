#include "main.h"

#include <stdio.h>

char *string_toupper(char *c)
{
	while (*c != '\0')
        {
                if ('A' <= *c && *c <= 'Z')
                {
                        c++;
                        continue;
                }
                *c = *c - ('a' - 'A');
                c++;
        }
        return c;
}
