#include "main.h"

/**
 * print_line - function
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
}
