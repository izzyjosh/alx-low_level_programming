#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: size of the buffer
 */

void print_buffer(char *b, int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; x < size; x += 10)
		{
			printf("%.8x:", x);
			for (y = x; y < x + 10; y++)
			{
				if (y % 2 == 0)
					putchar(' ');
				if (y < size)
					printf("%.2x", b[y]);
				else
					printf("  ");
			}
			putchar(' ');
			for (z = x; z < x + 10; z++)
			{
				if (z >= size)
					break;
				if (b[z] < ' ' || b[z] > '~')
					putchar('.');
				else
					putchar(b[z]);
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
