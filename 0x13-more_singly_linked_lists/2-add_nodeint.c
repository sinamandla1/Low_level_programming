#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: dbl ptr to node at the beginning of the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nextNode;
	nextNode = malloc(sizeof(listint_t));

	if (nextNode == NULL)
		return (NULL);

	nextNode->n = n;
	nextNode->next = *head;
	*head = nextNode;

	return (nextNode);
}
