#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int x = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (y)
	{
		if (n & y)
		{
			_putchar('1');
			y = 1;
		}
		else if (y)
		{
			_putchar('0');
		}
	}
}
