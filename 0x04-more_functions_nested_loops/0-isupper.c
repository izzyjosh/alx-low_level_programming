#include <stdio.h>
#include "main.h"

/**
 * _isupper - function
 * @c: parameter
 * Return: 1 if uppercase else 0
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i < 'Z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}

	return (0);
}
