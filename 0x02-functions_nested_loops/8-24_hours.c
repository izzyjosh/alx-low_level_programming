#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - function
 * @void: parameter
 * Return: void
 */

void jack_bauer(void)
{
	int i, j, k, l;
	
	for (i = 0; i <= 2; i++)
	{
	      for (j = 0; j <= 9; j++)
	      {
	            if (i == 2 && j > 3)
	            {
	            }
	            else
	            {
	                  for (k = 0; k < 6; k++)
	                  {
	                        for (l = 0; l <= 9; l++)
	                        {
	                              printf("%d%d:%d%d\n", i, j, k, l);
	                        }
	                  }
	            }
	      }
	}
}
