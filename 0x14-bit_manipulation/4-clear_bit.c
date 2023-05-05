#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int y = ~(1UL << index);
	*n = *n & y;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	return (1);
}
