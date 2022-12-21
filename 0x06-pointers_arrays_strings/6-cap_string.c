#include "main.h"

/**
 * cap_string - capitalizes a sentence
 * @s: sentence to convert
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int i, j;
	char escape_seq[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	for (i = 1; s[i] != 0; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i - 1] == escape_seq[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
					break;
				}
			}
		}
	}

	return (s);
}
