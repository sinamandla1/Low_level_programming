#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: double pointer integer.
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *make_space_two;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		make_space_two = (*head)->next;
		free(*head);
		*head = make_space_two;
	}
	*head = NULL;
}
