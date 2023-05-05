#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: ptr to the head of the list.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	while (*head != NULL)
	{
		currentNode = *head;
		*head = (*head)->next;
		free(currentNode);
	}
	if (*head == NULL)
	{
		return;
	}
}
