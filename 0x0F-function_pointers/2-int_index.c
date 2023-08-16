#include <stdio.h>
#include "function.h"

/**
 * int int_index - a function that searches for an integer.
 * @array: an array
 * @size: number of elements in the array
 * @cmp: pointer to function
 * Return: -1 if no elements match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array([i]))
			return (i);
	}
	return (-1);
}
