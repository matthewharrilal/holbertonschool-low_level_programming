#include "main.h"

#include <stdio.h>
#include <string.h>

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if ((i % 2 == 0))
		{
			printf("%s\n", str[i]);
		}
	}
}
