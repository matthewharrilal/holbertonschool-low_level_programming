#include <stdio.h>

int main(int argc, char *argv[])
{
	int counter;

	while (*argv)
	{	
		counter++;
		argv++;
	}

	printf("%d\n", argc);
	return (0);	
}
