#include <stdio.h>

/**
 * main -Entry point
 * @void: parameter
 * Return: 0 (success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			putchar((i / 10) + 48);
			putchar((i % 10) + 48);
			putchar(32);
			putchar((j / 10) + 48);
			putchar((j % 10) + 48);

			if (i != 98 || j != 99)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar(10);

	return (0);
}
