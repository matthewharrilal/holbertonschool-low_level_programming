#include <stdio.h>

int main(int argc, char *argv[])
{
	int counter;

	while (*argv)
	{	
		counter++;
		argv++;
	}

	/* Exclude the name of the program */
	printf("%d\n", argc - 1);
	return (0);	
}
