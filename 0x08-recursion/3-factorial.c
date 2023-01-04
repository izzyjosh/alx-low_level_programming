#include "main.h"

/**
 * factorial - function to print the factorial
 * @n: number to return factorial
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if  (n == 0 && n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
