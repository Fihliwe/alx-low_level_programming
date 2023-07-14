#include <stdio.h>
/**
 * main -  program that prints the alphabet in lowercase
 * Return: 0
 */

int main(void)
{
char lower;

lower = 'a';
while
	(lower <= 'z' && lower != 'q' && lower != 'e') {
		putchar(lower);
		lower++;
	}
putchar('\n');
return (0);
}
