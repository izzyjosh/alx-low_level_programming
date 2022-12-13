#include "main.h"

/**
 * _islower - function
 * @c: parameter
 * Return: 1 if lowercase else 0
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
