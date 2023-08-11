#import "main.h"

#import <stdio.h>
#import <string.h>

char *_strncat(char *dest, char *src, int n)
{
	int index;
	size_t destinationLength;

	destinationLength = strlen(src);

	for (index = destinationLength; index <= n; index++)
	{
		dest[index] = src[index - destinationLength];
	}
	return dest;
}
