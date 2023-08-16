#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int product;
	int firstInt;
	int secondInt;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	/* We are correctly de-referencing need to convert chars to int now  */
	firstInt = atoi(argv[1]);
	secondInt = atoi(argv[2]);
	product = firstInt * secondInt;

	printf("%d\n", product);
	return (0);
}
