#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * @n: test if positive or negative
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
