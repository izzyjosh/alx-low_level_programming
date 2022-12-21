#include "main.h"

/**
 * _strcat - join two string together
 * @dest: destination string
 * @src: source string
 * Return: char destination
 */


char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
		j++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
