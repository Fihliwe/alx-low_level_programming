
#include "main.h"
/**
 * print_rev -  that prints a string, in reverse, followed by a new line
 * @s: string
 * return: 0
 */

{
	int length = 0;
	int o;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;
	for (o = length; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
