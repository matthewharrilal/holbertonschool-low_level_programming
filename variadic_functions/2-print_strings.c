#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;

	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		if (va_arg(args, char *) != NULL)
		{
			printf("%s", va_arg(args, char *));
		} else 
		{
			printf("(nil)");
		}

		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end;
}
