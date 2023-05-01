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
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	node = *head;
	if (idx == 0)
	{
	new->next = *head;
	*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && node != NULL; i++)
	{
	node = node->next;
	}
	if (node == NULL)
	{
	free(new);
	return (NULL);
	}
	tmp = node->next;
	node->next = new;
	new->next = tmp;

	return (new);
}
