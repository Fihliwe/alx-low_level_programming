#include "main.h"
/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
	int n;
	int j;

	for (n = 1, n <= 14, n++)
	{
		for (j = 0, j <= 14, j++)
		{
			if (j >= 10)
				_putchar('1');
			_puthcar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
