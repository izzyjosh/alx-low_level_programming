#include <stdio.h>

/**
 * main - entry point
 * @void: parameter
 * Return: 0 (successful)
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar(10);

	return (10);
}
