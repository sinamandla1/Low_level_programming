#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Ptr to the head node of the linked list.
 * @index: Index of the node to retrieve.
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *currentNode = head;

	while (currentNode != NULL)
	{
		if (x == index)
		{
			return currentNode;
		}
		currentNode = currentNode->next;
		x++;
	}
	return (NULL);
}
