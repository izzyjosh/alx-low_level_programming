#include <stdio.h>

/**
 * main - entry point
 * @void: parameter
 * Return: 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
		{
		}
		else
		{
			putchar(i);
		}
	}

	putchar(10);

	return (0);

}
