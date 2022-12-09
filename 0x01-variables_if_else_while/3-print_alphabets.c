#include <stdio.h>

/**
 * main - entry point
 * @void: parameter
 * Return: 0 (successful)
 */


int main(void)
{
	int i;
	int j;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}

	putchar(10);

	return (0);
}
