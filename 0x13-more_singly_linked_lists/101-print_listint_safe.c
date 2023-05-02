#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	static const listint_t *visited_nodes[1024];
	static size_t visited_count;
	size_t i, count;

	if (head == NULL)
	return (0);

	for (i = 0; i < visited_count; i++)
	{
	if (head == visited_nodes[i])
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (visited_count);
	}
	}

	visited_nodes[visited_count++] = head;
	printf("[%p] %d\n", (void *)head, head->n);

	if (head->next == NULL)
	{
	visited_count--;
	return (visited_count + 1);
	}
	count = print_listint_safe(head->next);
	if (count == 1)
	{
	visited_count--;
	}
	return (count + 1);
}
