
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 *
 * Description: If separator is NULL, it is not printed.
 *              If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;

	char *a_string;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		a_string = va_arg(string, char *);

		if (a_string == NULL)
			printf("(nil)");
		else
			printf("%s", a_string);

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(string);
}
