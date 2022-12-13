#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - function
 * @n: parameter
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;
	int sum;

	last_digit = abs(n % 10);

	sum = printf("%d%d\n", last_digit, last_digit);
	
	return (sum);
}
