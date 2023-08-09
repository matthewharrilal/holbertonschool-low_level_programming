#include <stdio.h>

int main(void)
{
	int digit;
	char charNum;

	for (digit = 0; digit < 10; digit++)
	{
		charNum = digit + '0';
		putchar(charNum);
	}

	return (0);
}
