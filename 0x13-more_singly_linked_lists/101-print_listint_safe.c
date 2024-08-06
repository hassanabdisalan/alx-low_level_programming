#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = head;
	const listint_t *fast = head;

	while (current && fast && fast->next)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
		fast = fast->next->next;
		nodes++;

		if (current == fast)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			nodes++;
		}

		while (current != fast)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
			nodes++;
		}
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	return (nodes);
}
