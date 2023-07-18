#include "main."
/**
 * _islower - function that checks for lowercase character
 * c: is the character to be checked.
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	int c;

	if (c >= 'a')
		return (1);

	else if (c <= 'z')
		return (1);

	else
		return (0);
}
