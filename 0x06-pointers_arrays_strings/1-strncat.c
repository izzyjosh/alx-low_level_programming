#include "main.h"

/**
 * _strncat - combine two strings
 * @dest: destination string
 * @src: source string
 * @n: number of char to combine to the dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;

	while (dest[j] != '\0')
		j++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
