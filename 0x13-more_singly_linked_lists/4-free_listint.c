#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: integer to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *make_space;

	while (head)
	{
		make_space = head->next;
		free(head);
		head = make_space;
	}
}
