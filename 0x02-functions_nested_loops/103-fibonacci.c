#include <stdio.h>

/**
 * main - Entry point
 * @void: param
 * Return: 0
 */

int main(void)
{
	unsigned int a = 1, b = 1, z, count = 0;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			count += b;
		z = a;
		a = b;
		b = a + z;
	}
	printf("%u\n", count);

	return (0);
}
