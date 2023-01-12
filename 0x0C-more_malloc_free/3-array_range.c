#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: start from
 * @max: stop at
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;
	p = malloc(sizeof(int) * s);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		p[i] = min++;

	return (p);
}
