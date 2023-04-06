#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list.
 * @head: double pointer to int.
 * Return: head node’s data or empty return 0.
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *Mylist;

	if (*head == NULL)
	{
		return (0);
	}
	value = (*head)->n;
	Mylist = (*head)->next;
	free(*head);
	*head = Mylist;
	return (value);
}
