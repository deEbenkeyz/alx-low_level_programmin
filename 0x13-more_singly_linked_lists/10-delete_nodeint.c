#include "lists.h"

/**
 * delete_nodeint_at_index - this removes a node within a linked list at a certain index
 * @head: a pointer to the first element within the list
 * @index: an index of the node to remove
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_val = *head;
	listint_t *current_val = NULL;
	unsigned int count_i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp_val);
		return (1);
	}

	while (count_i < index - 1)
	{
		if (!temp_val || !(temp_val->next))
			return (-1);
		temp_val = temp_val->next;
		count_i++;
	}


	current_val = temp_val->next;
	temp_val->next = current_val->next;
	free(current_val);

	return (1);
}
