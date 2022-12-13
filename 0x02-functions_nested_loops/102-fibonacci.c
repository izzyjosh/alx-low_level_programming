#include <stdio.h>

/**
 * main - Entry point
 * @void: param
 * Return: 0
 */

int main(void)
{
	long int a = 1, b = 1, c = 0, z;

	while (c < 50)
	{
		printf("%ld", b);

		z = a;
		a = b;
		b = a + z;

		if (c != 49)
			printf(", ");
		c++;
	}
	printf("\n");

	return (0);
}
