#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 * @haystack: string to be searched
 * @needle: string to search
 * Return: pointer to haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
				break;
		}
		if (!*needle)
			return (result);
		needle = fneedle;
		result++;
		haystack = result;
	}

	return ('\0');
}
