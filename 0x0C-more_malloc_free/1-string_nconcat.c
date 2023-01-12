#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * @n: nunber of bytes to concatenate
 * Return: pointer to newly allocated memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		j++;

	p = malloc(j + 1);

	if (p == NULL)
		return (NULL);

	j = 0;

	for (i = 0; *(s1 + i); i++)
		p[j++] = s1[i];

	for (i = 0; *(s2 + i) && i < n; i++)
		p[j++] = s2[i];

	p[j] = '\0';

	return (p);
}
