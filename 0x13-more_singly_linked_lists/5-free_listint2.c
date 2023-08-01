#include "lists.h"

/**
 * free_listint2 - freeing up a linked list
 * @head: the head pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_val;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_val = (*head)->next;
		free(*head);
		*head = temp_val;
	}

	*head = NULL;
}
