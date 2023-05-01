#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets node at index
 * @head: linked list at head
 * @index: index of node to get
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (head == NULL)
	return (NULL);

	node = head;
	for (i = 0; i < index; i++)
	{
		node = node->next;
	if (node == NULL)
		return (NULL);
	}
	return (node);
}
