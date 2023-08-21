#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list args;
	
	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
