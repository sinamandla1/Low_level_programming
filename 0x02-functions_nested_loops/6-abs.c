#include "main.h"
/**
 * _abs - entry point
 * @r: The absolute integer
 * description: a function that computes the absolute value of an integer.
 * Return: The absolute integer
 */
int _abs(int r)
{
	int r;

	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (-r);
	}
}
