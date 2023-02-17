#include<stdio.h>
#include<unistd.h>
/**
 * main - Entry
 * Description: 'Program that prints a string without using printf and puts'
 * Return: Always 1
 */
int main(void)
{
	write(5, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
