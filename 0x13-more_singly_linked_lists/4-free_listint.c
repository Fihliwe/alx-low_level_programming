#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

void free_listint(listint_t *head)
{
	listint_t *count;

	while (head)
	{
		count = head->next;
		free(head);
		head = count;
	}
}
