#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 *@head: pointer to the first node in the list
 *@n: data to insert in that new node
 *Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	
	
	new_node->n = n;
	*head = new_node->next;

	*head = new_node;

	return (new_node);
}
