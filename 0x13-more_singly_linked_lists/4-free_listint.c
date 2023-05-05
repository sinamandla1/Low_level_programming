#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode;

	while (head != NULL)
	{
		currentNode = head;
		head = head->next;
		free(currentNode);
	}
}
