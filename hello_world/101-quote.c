#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char message[] = "and that piece of art is useful - Dora Korpar, 2015-10-19";
	
	/* Write to standard output the message and the size of the message represented by an array */
	write(1, message, sizeof(message) - 1);
	return (0);
}
