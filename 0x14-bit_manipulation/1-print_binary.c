#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: long integer to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int x, i = 0;
	unsigned long int CurrentNum;

	for (x = 63; x >= 0; x--)
	{
		CurrentNum = n >> x;
		if (CurrentNum & 1)
		{
			_putchar('1');
			i++;
		}
		else if (i)
		{
			_putchar('0');
		}

	}
	if (i == 0)
	{
		_putchar('0');
	}
}
