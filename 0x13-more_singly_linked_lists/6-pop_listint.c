#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Ptr to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 * Return: 0 or otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;
	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
	{
		return NULL;
	}
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	currentNode = *head;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
	}
	currentNode->next = newNode;
	return (newNode);
}