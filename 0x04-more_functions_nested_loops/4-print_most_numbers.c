#include "main.h"

/**
 * print_most_numbers - function
 * @void: parameter
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
