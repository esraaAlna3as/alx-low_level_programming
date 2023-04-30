#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint- free the list
 *@head: head of the list
 *Returns : void
 **/
void free_listint(listint_t *head)
{
listint_t *t;

	while (head != NULL)
	{
		t = head;
		free(head);
		head = t->next;
	}

}
