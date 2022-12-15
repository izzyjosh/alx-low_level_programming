#include "main.h"

/**
 * print_diagonal - prints a diagonal using /
 * @n: size of the diagonal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j < i - 1)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
