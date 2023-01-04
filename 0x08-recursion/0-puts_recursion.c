#include "main.h"

/**
 * _puts_recursion - use recursion to output a string
 * @s: string to be outputted
 */

void _puts_recursion(char *s)
{
	if (!(*s))
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
