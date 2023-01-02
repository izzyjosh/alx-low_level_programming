#include "main.h"

/**
 * _strchr - prints from first occurence of c in s to end of string s
 * @s: string to search
 * @c: character to search
 * Return: pointer to first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);

	return ('\0');
}
