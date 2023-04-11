#include "main.h"
/**
 * flip_bits - counts the number of bits to change to get from one number to another
 * @n: 1st int
 * @m: 2nd int
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int value = n ^ m;
	unsigned int bits = 0;

	while (value != 0)
	{
		bits += value & 1;
		value >>= 1;
	}
	return (bits);
}
