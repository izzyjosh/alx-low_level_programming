#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be checked
 * @accept: prefix
 * Return: length of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				c++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
