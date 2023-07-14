#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */

int main(void)
{
char lower;
char uppper;

lower = 'a';
upper = 'A';
while
	(lower <= 'z') {
		putchar(lower);
		lower++;
	}
while
	(upper <= 'Z') {
		putchar(upper);
		upper++;
	}
putchar('\n');
return (0);
}
