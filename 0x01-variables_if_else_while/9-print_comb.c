#include <stdio.h>

/**
 * main - entry point
 * @void: parameter
 * Return: 0 (successful)
 */

int main(void)
{
	int i, j, k, n;

	j = 44;
	k = 32;
	n = 0;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (n <= 8)
		{
			putchar(j);
			putchar(k);
			n++;
		}
	}
	putchar(10);

	return (0);
}
