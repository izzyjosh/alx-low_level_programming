#include <stdio.h>
#include <stdlib.h>


/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (successful)
 */

int main(int argc, char *argv[])
{
	int i, mul, j, k;

	if (argc > 1)
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);
		mul = j * k;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
