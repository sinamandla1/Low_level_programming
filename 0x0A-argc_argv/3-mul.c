#include "main.h"
/**
 * main - converts a string to an integer
 * @argc: Count arguments
 * @argv: Arguments
 * Return: the int converted from the string
 */
int main(int argc, char *argv[])
{
	int X, Y;

	if (argc == 3)
	{
		X = atoi(argv[1]);
		Y = atoi(argv[2]);
		printf("%d\n", X * Y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
