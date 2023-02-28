#include "main.h"
#include <stdio.h>
/**
 * _strlen - entry point
 * Description: returns the length of a string.
 * @s: declared variable.
 * Return: the length of s
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
