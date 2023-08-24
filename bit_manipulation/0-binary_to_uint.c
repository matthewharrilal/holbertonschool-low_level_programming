#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
        int index;
        unsigned long placeCounter;
        unsigned int sum;
        int currentNum;

        if (b == NULL)
        {
                return 0;
        } else if (strlen(b) == 1)
        {
                return 1;
        }
        index = 0;
        placeCounter = (unsigned long)1 << (strlen(b) - 1); /* Used to deterimine the max eponent we raise to given we read left to right  */
        sum = 0;

        while (b[index] != '\0')
        {
                currentNum = b[index] - '0';
                if (currentNum == 1)
                {
                        sum += (currentNum * placeCounter);

                } else if (currentNum != 0)
                {
                        return 0;
                }

                index++;
                placeCounter >>= (unsigned long)1;
        }

        return sum;
}

