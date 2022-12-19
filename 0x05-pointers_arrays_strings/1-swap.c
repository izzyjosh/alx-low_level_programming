#include "main.h"

/**
 * swap_int - swap two number
 * @a: first number
 * @b: second number
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
