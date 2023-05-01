#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint2- free the list set to null
 *@head: head of the list
 *Returns : void
 **/
void free_listint2(listint_t *head)
{
listint_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t);
	}
*head = NULL;
}
