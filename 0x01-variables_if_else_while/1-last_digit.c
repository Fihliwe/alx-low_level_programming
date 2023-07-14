#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - assign a random number to the variable n each time it is executed
 * Return: 0
 */

int main(void)
{
int n, l_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
l_digit = n % 10;

if (n > 5)
	printf("last digit of %d is %d and is greater than 5\n", n, l_digit);
else if (n == 0)
	printf("last digit of %d is %d and is 0\n", n, l_digit);
else if ((n < 6) !0)
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
return (0);
}
