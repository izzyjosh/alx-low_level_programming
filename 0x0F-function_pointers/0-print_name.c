#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: fubction pointer that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
