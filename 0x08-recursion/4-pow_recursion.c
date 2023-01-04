#include "main.h"

/**
 * _pow_recursion - function to print the power of x to y
 * @x: number to be squared
 * @y: power
 * Return: square of the number
 */

int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
