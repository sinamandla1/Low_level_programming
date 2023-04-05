#include "lists.h"
/**
 * add_nodeint_end -  a function that adds a new node at the end of a list.
 * @n: integer
 * @head: doube pointer
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_this = malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (add_this == NULL)
		return (NULL);
	add_this->n = n;
	add_this->next = NULL;
	if (*head == NULL)
	{
		*head = add_this;
		return (add_this);
	}

	while (end->next != NULL)
		end = end->next;
	end->next = add_this;
	return (add_this);
}
