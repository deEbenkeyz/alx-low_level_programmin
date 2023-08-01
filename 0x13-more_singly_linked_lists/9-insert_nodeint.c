#include "lists.h"

/**
 * insert_nodeint_at_index - this inserts a new node in a linked list,
 * at a given position
 * @head: this is a pointer to the first node in the list
 * @idx: this index where the new node is added
 * @n: new data to insert in the new node
 *
 * Return: this returns pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count_i;
	listint_t *new_val;
	listint_t *temp_val = *head;

	new_val = malloc(sizeof(listint_t));
	if (!new_val || !head)
		return (NULL);

	new_val->n = n;
	new_val->next = NULL;

	if (idx == 0)
	{
		new_val->next = *head;
		*head = new_val;
		return (new_val);
	}

	for (count_i = 0; temp_val && count_i < idx; count_i++)
	{
		if (count_i == idx - 1)
		{
			new_val->next = temp_val->next;
			temp_val->next = new_val;
			return (new_val);
		}
		else
			temp_val = temp_val->next;
	}

	return (NULL);
}
