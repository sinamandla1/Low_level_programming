#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the value to be erased
 * @index: index of the bit
 * Return: 1 if it works or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int clearMe = ~(1ul << index);
        *n &= clearMe;

        if (index > 63)
        {
                return (-1);
        }
        return (1);
}
