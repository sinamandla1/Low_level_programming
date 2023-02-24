#include "main..h"
/**
 * print_numbers - entry point
 * description -a function that print numbers 0 to 9
 * Return: numbers 0 to 9
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');
	_putchar('\n');
}
