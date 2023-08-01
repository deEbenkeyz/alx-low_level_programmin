#include "lists.h"

/**
 * pop_listint - deleting the head node of a linked list
 * @head: A pointer to the beginning element in the linked list
 *
 * Return: return the data inside the elements that was deleted,
 * or returns 0 when the list is null
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_val;
	int num_val;

	if (!head || !*head)
		return (0);

	num_val = (*head)->n;
	temp_val = (*head)->next;
	free(*head);
	*head = temp_val;

	return (num_val);
}
