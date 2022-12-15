#include "main.h"

/**
 * _isdigit - checks is a character is a number
 * @c: parameter to check
 * Return: 1 if true otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
