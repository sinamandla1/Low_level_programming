#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the value to be changed
 * @index: index of the bit to that is 1
 * Return: 1 if it works or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1ul << index;
	*n |= mask;

	if (index > 63)
	{
		return (-1);
	}
	return (1);
}
