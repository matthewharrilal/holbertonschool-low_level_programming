#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int index;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (index = 0; index < argc; index++)
	{
		if (isalpha(*argv[index]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(*argv[index]);	
	}

	printf("%d\n", sum);
	return (0);
}
