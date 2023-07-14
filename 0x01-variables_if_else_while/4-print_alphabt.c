#include <stdio.h>
/**
 * main -  program that prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
char lower;

for (lower = 'a'; lower <= 'z'; lower++)
{
	if (lower != 'q' && lower != 'e')
	{
		putchar(lower);
	}
}

putchar('\n');
return (0);
