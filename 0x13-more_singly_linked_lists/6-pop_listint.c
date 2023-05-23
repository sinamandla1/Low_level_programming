#include "lists.h"
/**
 * int pop_listint - function that deletes the head node of a listint_t linked list
 * @head: value to be deleted
 * Return: 0 if empty or return status
 */
int pop_listint(listint_t **head)
{
	 listint_t *tmp;
	 int status;

	 if (*head == NULL)
		 return (0);
	 tmp = *head;
	 status = (*head)->n;
	 *head = (*head)->next;
	 free(tmp);
	 return(status);
	
}
