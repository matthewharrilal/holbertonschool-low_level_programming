#include "main.h"

#include <stdio.h>
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
        char *pointer;
        while (*s && *accept)
        {
                pointer = strchr(accept, *s);

                if (pointer != NULL)
                {
                        return s;
                }

                s++;
                accept++;
        }
        return NULL;
}
