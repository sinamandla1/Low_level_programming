#include "main.h"
#include <stdio.h>
/**
 * swap_int - entry point
 * Description: a function that swaps the values of two integers.
 * Return: void
 * @a: declared int variable
 * @b: declared int variable
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
