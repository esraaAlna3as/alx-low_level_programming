#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * listint_len - length of list_t struct
 * @h: head node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
	count++;
	h = h->next;
}

return (count);
}
