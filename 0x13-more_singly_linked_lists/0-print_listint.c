#include "lists.h"

/**
 * print_listint - this prints out all the elements of a linked list
 * @h: a linked list of type listint_t to print
 *
 * Return: this return number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t value_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		value_num++;
		h = h->next;
	}

	return (value_num);
}
