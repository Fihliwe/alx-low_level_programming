#include "main.h"
/**
 * main - every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: 0
 */

void jack_bauer(void)
{
	int rows;
	int columns;


	rows = 0;

	for (rows < 24)
	{
		columns = 0;
		for (columns < 60)
		{
			_putchar((rows / 10) + '0');
			_putchar((rows % 10) + '0');
			_putchar((':');
			_putchar((columns / 10) + '0');
			_putchar((columns % 10) + '0');
			_putchar('\n');
			columns++;
		}
		rows++;
	}
}
