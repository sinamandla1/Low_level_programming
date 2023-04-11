#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: index to find
 * @index: bit in that position
 * Return: value of the bit at index index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
