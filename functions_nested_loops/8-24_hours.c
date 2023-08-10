#include "main.h"
#include <string.h>
#include <stdio.h>

void jack_bauer(void)
{
	char minuteString[4];
	char hourString[4];

	int hourCounter;
	int minuteCounter;

	char concatenatedString[10];

	for (hourCounter = 0; hourCounter < 24; hourCounter++)
	{
		for (minuteCounter = 0; minuteCounter < 60; minuteCounter++)
		{
			if (minuteCounter < 10)
			{
				sprintf(minuteString, "0%d", minuteCounter);
			} else 
			{
				sprintf(minuteString, "%d", minuteCounter);
			}

			
			if (hourCounter < 10)
			{
				sprintf(hourString, "0%d:", hourCounter);
			} else 
			{
				sprintf(hourString, "%d:", hourCounter);
			}

			strcpy(concatenatedString, hourString);
			strcat(concatenatedString, minuteString);
			printf("%s\n", concatenatedString);
		}
	}
}
i
