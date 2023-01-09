#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array by allocating it to memory
 * @size: size of the array
 * @c: character to populate the array
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	array[i] = '\0';

	return (array);
}
