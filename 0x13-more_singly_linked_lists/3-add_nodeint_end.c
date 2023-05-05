#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: dbl ptr to the head
 * @n: variable to add to the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *currentNode;
	newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (newNode == NULL)
	{
		return (NULL);
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
