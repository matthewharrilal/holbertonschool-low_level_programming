#include <stdio.h>

int main(void)
{
	int digit;
	char charNum;

	for (digit = 0; digit < 16; digit++)
	{
		if (digit < 10)
		{
			charNum = digit + '0';
			putchar(charNum);
		} else
		{
			/* Prints letters A - F  */
			putchar('a' + (digit - 10));
		}
	}

	return (0);
}
