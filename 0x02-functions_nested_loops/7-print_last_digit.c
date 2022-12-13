#include "main.h"

/**
 * print_last_digit - function to print last digut of a number
 * @n: param
 * Return: int
 */

int print_last_digit(int n)
{
	_putchar(n > 0 ? n % 10 + 48 : (n % 10) * -1 + 48);
	return (n > 0 ? n % 10 : (n % 10) * -1);
}
