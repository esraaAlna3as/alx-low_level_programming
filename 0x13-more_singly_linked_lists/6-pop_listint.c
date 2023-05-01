#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - pops first node of the list
 * @head: pointer to a pointer to the list
 * Return: first node
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
	return (0);

	first = *head;
	n = first->n;
	*head = (*head)->next;
	free(first);
	return (n);
}
