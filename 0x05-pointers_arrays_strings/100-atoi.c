#include "main.h"

/**
 * _atoi - function to convert string to integer
 * @s: char pointer to string
 * Return: converted integer
 */

int _atoi(char *s)
{
	unsigned int i, j, result, sign;

	i = 0;
	j = 0;
	result = 0;
	sign = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
			if (s[i + 1] >= '0' && s[i + 1] <= '9')
				break;
		}
		i++;
	}

	while (s[j] != '\0')
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			result = result * 10 + s[j] - '0';
			if (!(s[j + 1] >= '0' && s[j + 1] <= '9'))
				break;
		}
		j++;
	}

	return (result * sign);
}
