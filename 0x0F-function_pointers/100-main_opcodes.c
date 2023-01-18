#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entey point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, bytes;
	int (*fpt)(int, char **) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opc = *(unsigned char *)fpt;
		printf("%.2x", opc);

		if (i != (bytes - 1))
			putchar(' ');
		fpt++;
	}

	putchar('\n');

	return (0);
}
