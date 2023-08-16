#include <stdio.h>
#include "function_pointers.h"

/**
 *  array_iterator -  function that executes a function given as a parameter
 *  @array: an array
 *  @size: an array
 *  @action: function to a pointer
 *  Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == 	NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
