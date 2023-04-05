#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linked list.
 * @h: pointer to list.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	for (; h != NULL; h = h->next)
	{
		x++;
	}
	return (x);
}
