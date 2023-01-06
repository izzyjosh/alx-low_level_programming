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
	int result = 1, i;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
			result = result * strtol(argv[i], NULL, 10);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
