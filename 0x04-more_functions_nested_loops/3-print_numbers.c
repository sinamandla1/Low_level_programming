#include "main.h"
/**
 * print_numbers - entry point
 * description -a function that print numbers 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
