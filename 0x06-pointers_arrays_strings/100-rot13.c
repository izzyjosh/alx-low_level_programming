#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: pointer to s
 */

char *rot13(char *s)
{
	int i, j;
	char *alpha, *converter;

	alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	converter = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = converter[j];
				break;
			}
		}
	}

	return (s);
}
