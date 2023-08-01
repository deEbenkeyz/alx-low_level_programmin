#include "lists.h"

/**
 * add_nodeint_end - this adds a node at the end of a linked list
 * @head: a pointer that points to the first element in the list
 * @n: this is data to be inserted in the new element
 *
 * Return: this returns pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_val;
	listint_t *temp = *head;

	new_val = malloc(sizeof(listint_t));
	if (!new_val)
		return (NULL);

	new_val->n = n;
	new_val->next = NULL;

	if (*head == NULL)
	{
		*head = new_val;
		return (new_val);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_val;

	return (new_val);
}
