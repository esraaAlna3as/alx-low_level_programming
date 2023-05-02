#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the node at index index
 * @head: linked list
 * @index: index of node
 * Return: 1 in sucsess -1 if fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *tmp;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
	node = *head;
	*head = node->next;
	free(node);
	return (1);
	}

	node = *head;
	for (i = 0; i < index - 1; i++)
	{
	node = node->next;
	if (node == NULL)
	return (-1);
	}
	tmp = node;
	node = node->next;
	tmp->next = node->next;
	free(node);

	return (1);
}
