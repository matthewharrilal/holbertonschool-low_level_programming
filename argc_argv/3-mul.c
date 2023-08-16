#include <stdio.h>

int main(int argc, char *argv[])
{
	int product;
	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	
	product = *argv[1] * *argv[2];
	printf("%d\n", product);
	return (0);
}
