#include "main.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

char *_strstr(char *haystack, char *needle)
{
	int haystackLength;
	int needleLength;
	int counter;

	bool startedSequence;

	char firstChar;
	char *startingPos;
	char *startingNeedlePos;

	firstChar = *needle;
	haystackLength = strlen(haystack);
	needleLength = strlen(needle);
	counter = 0;
	startingNeedlePos = needle;

	if ((haystackLength == 1 && *haystack == " ") || haystackLength == 0)
	{
		return haystack;
	}

	while (*haystack && *needle)
	{	
		if (*haystack == firstChar && strchr(needle, *haystack))
		{	
			startedSequence = true;
			startingPos = haystack;
		}

		while (startedSequence && *haystack)
		{
			if (*haystack == *needle)
			{
				counter++;
				
			} else
			{
				startedSequence = false;
				needle = startingNeedlePos - 1;
	
				if (counter != needleLength)
				{
					counter = 0;
				}
			}

			haystack++;
			needle++;
		}
		haystack++;
	}
	
	if (startedSequence || (counter == needleLength))
	{
		return startingPos;
	} else
	{
		return NULL;
	}
}
