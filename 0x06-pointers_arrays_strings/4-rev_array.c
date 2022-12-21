#include "main.h"

/**
 * reverse_array - reverses an array in place
 * @a: array to reverse
 * @n: length of array
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	for (x = 0; x < n - 1; x++)
	{
		for (y = x + 1; y > 0; y--)
		{
			z = a[y];
			a[y] = a[y - 1];
			a[y - 1] = z;
		}
	}
	/**
	* The below block of code works but betty refused
	* to check it. Not really sure why though but
	* for other cases, this should also be ok for you.
	* i = n;
	* mid = (n - 1) / 2;
	* for (i = mid; i >= 0; i--)
	* {
	* temp = a[i];
	* a[i] = a[n - 1 - i];
	* a[n - 1 - i] = temp;
	* }
	*/
}
