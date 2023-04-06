#include "lists.h"
/**
 * insert_nodeint_at_index - function to insert a new node at a given position
 * @n: value to be inserted
 * @idx: index of a node
 * @head: pointer first node
 * return: address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_this = malloc(sizeof(listint_t));
	unsigned int spot = 0;
	listint_t *HereNow = *head;

	if (*head == NULL)
	{
		return (NULL);
	}
	add_this->n = n;
	add_this->next = NULL;

	if (idx == 0)
	{
		add_this->next = *head;
		*head = add_this;
		return (add_this);
	}
	if (add_this == NULL)
	{
		return (NULL);
	}
	while (spot < idx - 1)
	{
		HereNow = HereNow->next;
		spot++;
	}
	if (HereNow == NULL)
	{
		return (NULL);
	}
	add_this->next = HereNow->next;
	HereNow->next = add_this;
	return (add_this);
}
