#include "3-calc.h"

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int firstInt;
	int secondInt;
	char *operator;
	int (*result)(int, int);

	if (argc <= 1)
	{
		return (-1);
	}


	firstInt = atoi(argv[1]);
	secondInt = atoi(argv[3]);
	operator = argv[2];

	result = get_op_func(operator);

	if (result != NULL)
	{
		printf("%d\n", result(firstInt, secondInt));
	}
	return (0);
}
