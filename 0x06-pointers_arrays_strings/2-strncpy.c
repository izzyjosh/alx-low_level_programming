#include "main.h"

/**
 * _strncpy - copies src into dest and characters must
 * be equal to n.
 * @dest: string to be copied into
 * @src: string to be copied from
 * @n: number of characters to be copied
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; *(src + i) && i < n; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
