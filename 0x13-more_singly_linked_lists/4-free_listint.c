#include "lists.h"

/**
 * free_listint - freeing a linked list
 * @head: this is listint_t lists to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp_val;

	while (head)
	{
		temp_val = head->next;
		free(head);
		head = temp_val;
	}
}
