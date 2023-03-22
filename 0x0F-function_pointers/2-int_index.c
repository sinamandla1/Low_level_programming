#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @size: size of array
 * @array: array to be used
 * @cmp: pointer to a function
 * Return: i if (success), (-1) if less than zero or fails
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
