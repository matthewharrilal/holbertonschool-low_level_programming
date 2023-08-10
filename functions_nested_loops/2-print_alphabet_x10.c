#include "main.h"

#include <stdio.h>

void print_alphabet_x10(void)
{
	int counter;
	char letter;

	for (counter = 0; counter < 10; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
			putchar("\n");
		}
	}
}
