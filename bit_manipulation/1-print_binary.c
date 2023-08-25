#include "main.h"

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

void print_binary(unsigned long int n)
{
        /* Using string to track output  */
       /* char binaryStr[64]; */

        /* Detects what position we are at in the output string  */
        int index;

        /* Finds the max exponent place before the int value  */
        unsigned long int exponentFinder;

        /* Tracking the remaining difference between the last exponent place and the remaining number  */
        long int difference;

        /* In case we need to add more 0's to the end of output string  */
        int trailingZeros;

        index = 0;
        exponentFinder = 1;
        difference = 0;
       /* binaryStr[index] = '0'; */
        trailingZeros = 0;


        /* Keep shifting exponentFinder to the left until we find the max exponent  */
        while (exponentFinder < n)
        {
                trailingZeros++;
                exponentFinder <<= 1; /* Shift bit by 1 until we get closest to n  */
        }

        /* If we find an early match between exponentFinder and N do early exit otherwise shift back to the left  */
        if (n != exponentFinder)
        {
                exponentFinder >>= 1; /* Reset it back to the previous position  */
        } else
        {

                /* binaryStr[index] = '1'; */
		putchar('1');
                index++;
                difference = 0;
        }

        difference = n - exponentFinder;
        if (difference > 0)
        {
                /* binaryStr[index] = '1'; */
		putchar('1');
                index++;
        } else {
               /* binaryStr[index] = '0' */;
	       putchar('0');
                index++;
        }

        while (difference > 0 && exponentFinder > 0)
        {
                exponentFinder >>= 1;
                if ((long int)exponentFinder <= difference) /* Meaning you can still fit that remaining exponent inside of the remaining number (difference) */
                {
                        /* binaryStr[index] = '1'; */
			putchar('1');
                        difference -= exponentFinder;
                } else
                {
                       /*  binaryStr[index] = '0'; */
			putchar('0');
                }

                index++;
        }

        /* Add necessary trailing 0's  */
        while (trailingZeros > index)
        {
                binaryStr[index] = '0';
                index++;
        }

        binaryStr[index] = '\0';

	putchar('\n');
       /* printf("%s\n", binaryStr); */
}

/*
void print_binary(unsigned long int n)
{
	int index;
	unsigned long int *dynamicArray;

	if (n == 1)
	{
		putchar('1');
		return;
	} else if (n == 0)
	{
		putchar('0');
		return;
	}


	index = 0;
	dynamicArray = malloc(sizeof(unsigned long int));


	while (n > 0)
	{
		dynamicArray[index] = (n % 2); / Every iteration we divide by 2 and that shifts us to the left as we transition left value should get smaller  /
		n /= 2;
	}

	printf("%p\n", (void *)dynamicArray);
	return;
}
*/
