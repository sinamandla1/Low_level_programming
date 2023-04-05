#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: double pointer to head of the list.
 * @n: integer value to be stored.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_this = malloc(sizeof(listint_t));

	add_this->n = n;
	add_this->next = *head;
	*head = add_this;
	return (add_this);

	if (add_this == NULL)
	{
		return (NULL);
	}
}
