#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: input list
 * Return: head node's data (n), or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (!(head))
		return (0);

	data = temp->n;

	*head = (*head)->next;

	free(temp);

	return (data);
}
