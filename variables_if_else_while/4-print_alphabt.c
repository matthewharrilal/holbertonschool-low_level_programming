#include <stdio.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
		{
			continue;
		}

		putchar(letter);
	}
	return (0);
}
