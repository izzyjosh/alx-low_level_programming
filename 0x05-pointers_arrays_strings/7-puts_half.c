#include "main.h"
#include <string.h>

/**
 * puts_half - put half of a string
 * @str: parameter
 */


void puts_half(char *str)
{
	int i, len, start;

	len = strlen(str);

	if (len % 2 == 1)
	{
		start = (len - 1) / 2;
		for (i = start + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		start = len / 2;
		for (i = start + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
