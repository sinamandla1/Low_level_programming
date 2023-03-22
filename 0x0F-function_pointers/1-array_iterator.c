#include "function_pointers.h"
/**
 * array_iterator - function given as a parameter on each element of an array.
 * @action: pointer to the function
 * @size: size of array
 * @array: pointer to array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
