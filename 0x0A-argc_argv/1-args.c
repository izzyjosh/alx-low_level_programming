#include <stdio.h>

int main(int argc, char * argv[])
{
	int sum, i;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum += 1;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
