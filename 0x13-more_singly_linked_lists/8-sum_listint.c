#include "lists.h"

/**
 * sum_listint - to calculate the sum of all the data in a listint_t list
 * @head: this points to the first node in the linked list
 *
 * Return: this returns a resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum_results = 0;
	listint_t *temp_val = head;

	while (temp_val)
	{
		sum_results += temp_val->n;
		temp_val = temp_val->next;
	}

	return (sum_results);
}
