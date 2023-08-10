#include "main.h"

#include <stdio.h>


void jack_bauer(void);
{
	char minuteString[4];
	char hourString[4];

	int hourCounter;
	int minuteCounter;

	char concatenatedString[10];

	for (hourCounter = 0; hourCounter < 24; hourCounter ++)
	{
		for (minuteCounter = 0; minuteCounter < 60; minuteCounter ++)
		{
			if (minuteCounter < 10)
			{
				minuteString = snprintf(minuteString, sizeof(minuteString), "0%d", minuteCounter);
			} else 
			{
				minuteString = snprintf(minuteString, sizeof(minuteString), "%d", minuteCounter);
			}

			
			if (hourCounter < 10)
			{
				hourString = snprintf(hourString, sizeof(hourString), "0%d:", hourCounter);
			} else 
			{
				hourString = snprintf(hourString, sizeof(hourString), "%d:", hourCounter);
			}

			concatenatedString = strcat(hourString, minuteString);
			printf(concatenatedString);
		}
	}
}

