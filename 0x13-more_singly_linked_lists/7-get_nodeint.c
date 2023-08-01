#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the node
 * at a certain index in a linked list
 * @head: the first node in the linked list
 * @index: The index of the node to return
 *
 * Return: A pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count_i = 0;
	listint_t *temp_val = head;

	while (temp_val && count_i < index)
	{
		temp_val = temp_val->next;
		count_i++;
	}

	return (temp_val ? temp_val : NULL);
}
