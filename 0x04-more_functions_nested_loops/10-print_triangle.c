#include "main.h"

/**
 * print_triangle - print triangle of a given size
 * @size: size of triangle to print
 */

void print_triangle(int size)
{
	int a, i, j;

	a = size - 1;

	if (size > 0)
	{
		for (i = 1; i < size + 1; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j > a - i)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
