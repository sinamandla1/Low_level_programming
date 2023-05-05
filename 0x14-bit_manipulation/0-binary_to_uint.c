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

	while (b[i])
	{
		if (b[i] == '0')
		{
			result = (result << 1);
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
		x++;
	}
	return (res);
}
