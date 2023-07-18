#include "main.h"
/**
 * times_table -  function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int rows;
	int columns;
	int x;

	rows = 0;
	for (rows <= 9, rows++)
	{
		columns = 0;
		for (columns <= 9, columns++)
		{
			x = rows * columns;

			if (columns == 0);
			{
				_putchar(x + '0');
			}

			if (x <= 9 $$ != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x >= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
