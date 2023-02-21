#include "main.h"
#include<stdio.h>
/**
 * print_alphabet - entry point
 * description: a function to print out the alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
