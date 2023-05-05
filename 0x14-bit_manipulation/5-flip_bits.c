#include "main.h"
/**
 * flip_bits - Returns the number of bits needed to flip to get
 * from one number to another.
 * @n: The first number.
 * @m: The second number.
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	unsigned int i = 0;

	while (value)
	{
		i += value & 1;
		value >>= 1;
	}
	return (i);
}
