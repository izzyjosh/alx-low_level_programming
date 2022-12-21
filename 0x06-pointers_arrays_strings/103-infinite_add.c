#include "main.h"

/**
 * infinite_add - Adds characters to return a result
 * @n1: first number
 * @n2: second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: pointer to r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, lc, ln1, ln2, rem = 0, cur_sum;

	while (n1[a] != '\0')
		a++;
	while (n2[b] != '\0')
		b++;
	lc = a >= b ? a : b;
	if (size_r <= lc + 1)
		return (0);
	r[lc + 1] = '\0';
	a--, b--, size_r--;
	ln1 = n1[a] - '0', ln2 = n2[b] - '0';
	while (lc >= 0)
	{
		cur_sum = ln1 + ln2 + rem;
		if (cur_sum > 9)
			rem = cur_sum / 10;
		else
			rem = 0;
		if (cur_sum > 0)
			r[lc] = (cur_sum % 10) + 48;
		else
			r[lc] = '0';
		if (a > 0)
			a--, ln1 = n1[a] - 48;
		else
			ln1 = 0;
		if (b > 0)
			b--, ln2 = n2[b] - 48;
		else
			ln2 = 0;
		lc--, size_r--;
	}
	if (*r == '0')
		return (r + 1);
	return (r);
}
