#include "main.h"
/**
 * _abs - entry point
 * @r: The absolute integer
 * description: a function that computes the absolute value of an integer.
 * Return: The absolute integer
 */
int _abs(int n)
{
	int n;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
