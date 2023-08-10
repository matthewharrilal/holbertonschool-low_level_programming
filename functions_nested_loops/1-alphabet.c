#include <stdio.h>
#include "main.h"

void print_alphabet(void)
{
	char letter;
	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		letter = letter +  '\n';
		putchar(letter);
	}	
}
