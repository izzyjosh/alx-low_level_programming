#include "main.h"

/**
 * _sqrt_recursion - finds square root using recursion
 * @n: number to find square root
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_check_for_sqrt(n, 0));
}

/**
 * _check_for_sqrt - checks if a nunber is the square root of n
 * @n: number to find square root
 * @guess: number to check for sqrt
 * Return: square root of n
 */

int _check_for_sqrt(int n, int guess)
{
	if (n < 0 || guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (_check_for_sqrt(n, guess + 1));
}
