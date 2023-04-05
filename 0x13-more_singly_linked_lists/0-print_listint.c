#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a list.
 * @h: pointer to the list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		x++;
	}
	return (x);
}
