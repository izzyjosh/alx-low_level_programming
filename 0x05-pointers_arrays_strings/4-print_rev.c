#include "main.h"

/**
 * print_rev - reverse a string
 * @s: parameter for string
 */


void print_rev(char *s)
{
	int len, i;

	len = _strlen(s);

	for (i = len; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
