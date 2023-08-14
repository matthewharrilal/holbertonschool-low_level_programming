#include "main.h"

#include <stdio.h>

char *string_toupper(char *c)
{
	while (*c != '\0')
        {
                if ('a' <= *c && *c <= 'z')
                {       
                        *c = *c - ('a' - 'A');
                }
                c++;
        }
        return c;
}
