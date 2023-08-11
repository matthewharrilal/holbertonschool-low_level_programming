#import "main.h"

#import <stdio.h>
#import <string.h>

char *_strcat(char *dest, char *src)
{
	int index;
	size_t destinationLength;
	size_t sourceLength;
	size_t combinedLength;

	sourceLength = strlen(src);
	destinationLength = strlen(dest);
	
	combinedLength = destinationLength + sourceLength;
	for (index = destinationLength; index <= combinedLength; index++)
	{
		dest[index] = src[index - destinationLength];
	}
	return dest;
}
