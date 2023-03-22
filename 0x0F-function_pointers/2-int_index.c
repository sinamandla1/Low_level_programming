#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @size: size of array
 * @array: array to be used
 * @cmp: pointer to a function
 * Return: 0 if (success), (-1) if less than zero or fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		if (size <= 0)
		{
			return (-1);
		}
	}
	return (0);
}
