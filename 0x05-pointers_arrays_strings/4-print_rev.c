#include "main.h"
#include <string.h>

/**
 * print_rev - reverse a string
 * @s: parameter for string
 */


void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len - 1; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
