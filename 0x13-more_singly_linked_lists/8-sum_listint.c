#include "lists.h"
/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list.
 * @head: Ptr to the head node of the linked list.
 * Return: Sum of all the data values, or 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *currentNode = head;

	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}
	return (sum);
}
