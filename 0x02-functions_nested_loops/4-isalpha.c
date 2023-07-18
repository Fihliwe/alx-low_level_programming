#include <main.h>

/**
 * int _isalpha -  function that checks for alphabetic character.
 * c: is a character in the functions called
 * Return: 1 if lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	int c;

	if (c >= 'a')
		return (1);
	else if (c <= 'z')
		return (1);
	else if (c <= 'A')
		return (1);
	else if (c <= 'Z')
		return (1);
	else
		return (0);
}
