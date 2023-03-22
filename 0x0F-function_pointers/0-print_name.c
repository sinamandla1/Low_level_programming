#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: person's name
 *@f: pointer to a function
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
