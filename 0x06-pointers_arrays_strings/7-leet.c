#include "main.h"

/**
 * leet - encodes a string into 1337
 * see README.md for more description
 * @s: string to encode
 * Return: pointer to s
 */

char *leet(char *s)
{
	char lower_char[] = {'a', 'e', 'o', 't', 'l'};
	int numbers[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower_char[j] ||
			s[i] == lower_char[j] - 32)
			{
				s[i] = numbers[j] + '0';
				break;
			}
		}
	}

	return (s);
}
