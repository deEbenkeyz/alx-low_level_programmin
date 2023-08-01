#include "lists.h"

/**
 * listint_len - this returns the number of elements found in a linked lists
 * @h: this is linked list of type listint_t to traverse
 *
 * Return: this returns the number of nodes found
 */
size_t listint_len(const listint_t *h)
{
	size_t value_num = 0;

	while (h)
	{
		value_num++;
		h = h->next;
	}

	return (value_num);
}
