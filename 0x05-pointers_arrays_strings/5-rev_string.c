#include "main.h"

/**
 * rev_string - prints a string to stdout in reverse
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, length;
	char c;

	length = 0;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = c;
	}
}
