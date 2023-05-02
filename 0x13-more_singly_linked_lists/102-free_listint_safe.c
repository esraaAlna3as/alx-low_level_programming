#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a listint_t list
 * @h: A pointer to a pointer to the head of the list
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	static listint_t *visited_nodes[1024];
	size_t count = 0, i, visited_count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		temp = current->next;

		for (i = 0; i < visited_count; i++)
		{
			if (current == visited_nodes[i])
			{
				*h = NULL;
				return (count);
			}
		}

		visited_nodes[visited_count++] = current;
		count++;

		free(current);

		current = temp;
	}

	*h = NULL;

	return (count);
}
