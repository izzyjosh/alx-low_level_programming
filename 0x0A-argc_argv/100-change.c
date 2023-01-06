#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int change[] = {25, 10, 5, 2, 1};
	int a, b, i, num, result = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			a = num / change[i];
			b = num % change[i];
			result += a;
			num = b;
		}

		printf("%d\n", result);
	}

	exit(EXIT_SUCCESS);
}
