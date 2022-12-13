#include "main.h"

/**
 * print_sign - function
 * @n: parameter
 * Return: 1 if positve -1 if negative 0if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
