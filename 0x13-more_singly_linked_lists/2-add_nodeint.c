#include "lists.h"

/**
 * add_nodeint - adding a new node to the beginning of a linked list
 * @head: a pointer to the first node in the list
 * @n: this data is to insert in that new node
 *
 * Return: A pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_value;

	new_value = malloc(sizeof(listint_t));
	if (!new_value)
		return (NULL);

	new_value->n = n;
	new_value->next = *head;
	*head = new_value;

	return (new_value);
}
