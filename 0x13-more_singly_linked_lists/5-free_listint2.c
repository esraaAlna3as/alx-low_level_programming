#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint2- free the list set to null
 *@head: pointer to a pointer to the list
 *Returns : void
 **/
void free_listint2(listint_t **head)
{
listint_t *t;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	*head = NULL;
}
