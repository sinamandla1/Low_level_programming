#include "main.h"
#include <stdio.h>
/**
 * rev_string - entry point
 * Description: function that reverses a string.
 * @s: string
 * Return: always 0 (success)
 */
void rev_string(char *s)
{
	int a = 0, e, f;
	char g;

	while (s[a] != '\0')
	{
		a++;
	}
	f = a - 1;
	for (e = 0; f >= 0 && e < f; f--, e++)
	{
		g = s[e];
		s[e] = s[f];
		s[f] = g;
	}
}
