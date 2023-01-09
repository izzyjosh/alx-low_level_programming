#include <stdlib.h>
#include "main.h"

/**
 * str_concat -  concatenates two strings.
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int c = 0, i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + c))
		c++;
	while (*(s2 + i))
		i++;
	s3 = malloc(c + i + 1);

	if (s3 == NULL)
		return (NULL);

	for (j = 0; j < c; j++)
		s3[j] = s1[j];

	for (; j < (c + i); j++)
		s3[j] = s2[j - c];

	s3[j] = '\0';

	return (s3);
}
