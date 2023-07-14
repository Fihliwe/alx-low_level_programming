#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
int number;

number = 1;
for (number <= 9; number++)
{
	printf(number);
}

printf('\n');
return (0);

}
