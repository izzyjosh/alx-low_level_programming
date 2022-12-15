#include "main.h"

/**
 * _isdigit - function
 * @c: parameter
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	
	return (0);
}
