#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node
 * @head:pointer to a pointer to a listint_t
 * @n: number to add to the list
 * Return: returns an address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
