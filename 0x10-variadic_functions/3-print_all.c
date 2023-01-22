#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints a string to stdout with specified format.
 * @format: format specifiers to print string
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *s;
	va_list arg;
	int is_valid_specifier = 1;

	va_start(arg, format);

	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(arg, int));
				is_valid_specifier = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				is_valid_specifier = 1;
				break;
			case 'c':
				printf("%c", va_arg(arg, int));
				is_valid_specifier = 1;
				break;
			case 's':
				s = va_arg(arg, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				is_valid_specifier = 1;
				break;
			default:
				is_valid_specifier = 0;
				break;
		}
		if (format[i + 1] && is_valid_specifier == 1)
			printf(", ");
		i++;
	}
	va_end(arg);
	printf("\n");
}
