#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - performs add operation
 * @a: num1
 * @b: nun2
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - performs sub operation
 * @a: nun1
 * @b: nun2
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - performs multiplication
 * @a: num1
 * @b: num2
 * Return: a multiplied by b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: num1
 * @b: num2
 * Return: a divide by b
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - performs modulus operator
 * @a: num1
 * @b: num2
 * Return: a mod b
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
