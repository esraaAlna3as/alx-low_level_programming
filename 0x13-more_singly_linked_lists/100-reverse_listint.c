#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: linked list
 * Return: return pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head;

	while (current != NULL)
	{
	*head = (*head)->next;
	current->next = prev;
	prev = current;
	current = *head;
	}
	*head = prev;
	return (*head);
}
