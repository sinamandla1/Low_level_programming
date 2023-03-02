#include "main.h"
/**
 * reverse_array - entry point
 * Description: reverses the content of an array of integers.
 * @a: 1st param
 * @n: 2nd param
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, c;
	
	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
