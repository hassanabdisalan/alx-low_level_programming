#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end.
 * @head: pointer to a pointer.
 * @n: function parameter.
 * Return: NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t  *new_node_at_the_end = malloc(sizeof(listint_t));

	if (new_node_at_the_end == NULL)
	{
		return (NULL);
	}
	new_node_at_the_end->n = n;
	new_node_at_the_end->next = NULL;

	if (*head == NULL)
	{
	*head = new_node_at_the_end;
	}
	else
	{
	listint_t *current = *head;

	while (current->next != NULL)
	{
	current = current->next;
	}

	current->next = new_node_at_the_end;
	}
	return (new_node_at_the_end);
}
