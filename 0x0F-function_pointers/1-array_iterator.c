#include "function_pointers.h"

/**
 * array_iterator - iterates an array
 * @array: array to display
 * @size: size of the array
 * @action: function pointer to print array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
