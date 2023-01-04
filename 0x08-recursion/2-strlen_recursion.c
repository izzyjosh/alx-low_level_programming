#include "main.h"

/**
 * _strlen_recursion - finds a string length using recursion
 * @s: string to work on
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
