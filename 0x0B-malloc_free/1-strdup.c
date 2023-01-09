#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: param
 * Return: pointer to str
 */

char *_strdup(char *str)
{
	char *s;
	int c = 0, j;

	if (str == NULL)
		return (NULL);

	while (*(str + c))
		c++;

	s = malloc(c + 1);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < c; j++)
		s[j] = str[j];

	s[j] = '\0';

	return (s);
}
