#include "main.h"

/**
 * _strlen - count the number of characters
 * @s: parameter
 * Return: int j
 */

int _strlen(char *s)
{
	int i, j;

	j = 0;

	for (i = 0; i > -1; i++)
	{
		if (s[i] != '\0')
		{
			j++;
		}
		else
		{
			break;
		}
	}
	return (j);
}
