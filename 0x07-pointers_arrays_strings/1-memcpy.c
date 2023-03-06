#include "main.h"
#include <string.h>
/**
 * _memcpy - entry point
 * description: copies memory area.
 * @dest: character
 * @src: character
 * @n: integer
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
