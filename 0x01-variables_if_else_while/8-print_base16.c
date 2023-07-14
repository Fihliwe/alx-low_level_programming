#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */

int main(void)
{
	int number;
	char letter;

	number = 0;
	letter = 'a';

	while
		(number <= 9)
		{
			putchar(number + '0');
			number++;
		}
	while
		(letter <= 'f')
		{
			putchar(letter);
			letter++;
		}
	putchar('\n');
	return (0);
}
