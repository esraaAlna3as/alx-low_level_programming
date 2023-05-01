#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at index
 * @head: linked list
 * @idx: index of node
 * @n: value of node
 * Return: newly added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node, *tmp, *new;

	if (head == NULL)
	return (NULL);

	node = *head;
	for (i = 0; i < idx - 1; i++)
	{
	node = node->next;
	if (node == NULL)
	return (NULL);
	}
	new = malloc(sizeof(listint_t));
	tmp = node;
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
