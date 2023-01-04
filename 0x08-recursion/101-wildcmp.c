#include "main.h"

/**
 * wildcmp - compares two strings using recursion
 * @s1: base string
 * @s2: string to compare
 * Return: 1 if both are identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1)
	{
		if (*s2 && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s2 == *s1)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
