#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - function return number of elements
 *@h - node
 *Return: count
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
