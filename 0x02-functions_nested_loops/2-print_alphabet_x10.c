#include <stdio.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char columns;
	int rows;

	rows = 0;

	for (rows < 10)
	{
		columns = 'a';
		for (columns <= 'z')
		{
			_putchar(columns);
			columns++;
		}

		_putchar('\n');
		rows++;
	}
}

