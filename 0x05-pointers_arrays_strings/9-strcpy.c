#include "main.h"
#include <string.h>

/**
 * _strcpy - copy and paste
 * @dest: paste here
 * @src: copy from here
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);

	for (i = 0; i < len && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
