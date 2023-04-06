#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data of a linked list
 * @head: pointer to integer
 * Return: sum or null
 */
int sum_listint(listint_t *head)
{
	listint_t *addme = head;
	int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (addme)
	{
		count += addme->n;
		addme = addme->next;
	}
	return (count);
}
