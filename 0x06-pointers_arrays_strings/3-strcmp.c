#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: first string
 * @s2: second string
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;

	while (s1[j] != '\0')
		j++;
	for (i = 0;i < j; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (15);
			else
				return (-15);
		}
		else
		{
			return (0);
		}
	}
}
