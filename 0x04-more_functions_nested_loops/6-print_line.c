#include "main.h"

/**
 * print_line - prints a straight line using the character _.
 * @n: number of _ characters to be printed.
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
