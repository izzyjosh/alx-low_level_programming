#include "variadic_functions.h"

/**
 * sum_them_all - adds all arguments passed as multiple arg.
 * @n: nunber of arguments passed
 * Return: sum of args else 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
