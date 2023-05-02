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
	const listint_t *visited_nodes[1024] = {NULL};
	size_t visited_count = 0, i, count = 0;

	while (head && visited_count < 1024)
	{
	for (i = 0; i < visited_count; i++)
	{
	if (head == visited_nodes[i])
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
		return (count);
	}
	}
	visited_nodes[visited_count++] = head;
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	count++;
	}
	if (visited_count >= 1024)
	{
	printf("-> [%p] %d\n", (void *)head, head->n);
	return (count);
	}
	if (count == 1)
	{
	visited_count--;
	}
	return (count);
}
