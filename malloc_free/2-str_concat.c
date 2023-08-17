#include "main.h"

#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
        size_t firstSize;
        size_t secondSize;
        size_t index;
        size_t secondIndex;

        if (s1 == NULL)
        {
                s1 = "";
        }

        if (s2 == NULL)
        {
                s2 = "";
        }

        firstSize = 0;
        secondSize = 0;

        while (s1[firstSize])
        {
                firstSize++;
        }

        while (s2[secondSize])
        {
                secondSize++;
        }

        s1 = (char *)realloc(s1, (firstSize + secondSize + 1) * sizeof(char));
        secondIndex = 0;
        for (index = firstSize; index < (firstSize + secondSize); index++)
        {
                s1[index] = s2[secondIndex];
                secondIndex++;
        }

        return s1;
}
