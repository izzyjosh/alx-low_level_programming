#include <stdio.h>

/**
 * main - entry point
 * @void: parameter
 * Return: 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar(10);

	return (0);
}
