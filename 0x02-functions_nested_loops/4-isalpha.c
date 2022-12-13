#include "main.h"

/**
 * _isalpha - function
 * @c: parameter
 * Return: 1 if letter else 0
 */

int _isalpha(int c)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
			{
				return (1);
			}
		}
	}

	return (0);
}
