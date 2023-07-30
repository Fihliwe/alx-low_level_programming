#include "main.h"
/**
 * print_last_digit -  function that prints the last digit of a number.
 * @n: prints the random number
 * Return: l_digit
 */
int print_last_digit(int n)
{
	int l_digit;

	if (n < 0)
	n = -n;

	l_digit = n % 10;

	if (l_digit < 0)
		l_digit = -l_digit;

	_putchar(l_digit + '0');
	return (l_digit);
}
