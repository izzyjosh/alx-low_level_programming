#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints all nunbers passed as optional arg.
 * @separator: character to separate nunbers to be printed
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arg);
	printf("\n");
}
