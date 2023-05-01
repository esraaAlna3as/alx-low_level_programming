#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - return sum of the list
 * @head: head of linked list
 * Return: sumation of the list elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
