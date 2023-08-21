#include "variadic_functions.h"

#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	int index; 
	va_list args;
	char *s;
	int i;
	float f;
	char c;

	va_start(args, format);

	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == 'c')
		{	
			c = va_arg(args, char);
			printf("%c", c);
		} else if (format[index] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		} else if (format[index] == 'f')
		{
			f = va_arg(args, float);
			printf("%f", f);
		} else if (format[index] == 's')
		{
			s = va_arg(args, char *);
			if (s != NULL)
			{
				printf("%s", s);	
			} else
			{
				printf("(nil)");
			}
		}
	}
}
