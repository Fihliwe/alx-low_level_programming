#include "list.h"
#include <stdio.h>

/**
 * print_list - prints all the elements 
 * @h: head
 * Return: character
 */

size_t print_list(const list_t *h)
{
	size_t num_elements;
	num_elements = 0;

	while (h)
	{
		if (!h -> str)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);
			h = h -> next;
			num_elements++;
	}
	return (num_elements);
}
