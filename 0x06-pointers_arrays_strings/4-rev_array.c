#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: a pointer to an array
 * @n: len of the array
 */

void reverse_array(int *a, int n)
{
	int i, m;

	n = n - 1;
	m = n;
	int arr[n + 1];

	for (i = 0; i < n; i++)
	{
		arr[i] = a[m];
		m--;
	}
	for (i = 0; i < n + 1; i++)
	{
		a[i] = arr[i];
	}
}
