#include "main.h"
/**
 * _strchr - entry point
 * description: locates a character in a string.
 * @c: a character
 * @s: a string
 * Return: a pointer to the first occurrence of the character.
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b = 0; b < a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
