#include "main.h"
/**
 * _memset - entry point
 * Description: fills memory with a constant byte.
 * @s: string
 * @b: character
 * @n: integer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
