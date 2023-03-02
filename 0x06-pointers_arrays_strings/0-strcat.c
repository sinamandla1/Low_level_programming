#include "main.h"
#include <stdlib.h>
/**
 * _strcat - entry point
 * Description: function that concatenates two strings.
 * @dest: variable
 * @src: variable
 * Return: the string
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
