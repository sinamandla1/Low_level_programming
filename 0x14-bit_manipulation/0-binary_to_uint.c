#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string
 * Return: The converted number, or 0 if there is an invalid character
 * or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int x = 0;

	while (b[x])
	{
		if (b[x] == '0')
		{
			res = (res << 1);
		}
		else if (b[x] == '1')
		{
			res = (res << 1) | 1;
		}
		else
		{
			return (0);
		}
		x++;
	}
	return (res);
}
