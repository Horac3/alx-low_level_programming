#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str;
	int i = 0, int_arg;
	float float_arg;
	char char_arg;
	const char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				char_arg = va_arg(args, int);
				printf("%s%c", sep, char_arg);
				break;

			case 'i':
				int_arg = va_arg(args, int);
				printf("%s%d", sep, int_arg);
				break;

			case 'f':
				float_arg = va_arg(args, double);
				printf("%s%f", sep, float_arg);
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", sep);
				}
				else
				{
					printf("%s%s", sep, str);
				}
				break;
			default:
				break;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}

