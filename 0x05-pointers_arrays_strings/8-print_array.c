#include "main.h"
#include <stdio.h>

/**
 * print_array - print element in an array
 * @a: array
 * @n: number of element in arr
 */

void print_array(int *a, int n)
{
	long i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
		{
			printf(",");
			printf(" ");
		}
	}
	_putchar('\n');
}
