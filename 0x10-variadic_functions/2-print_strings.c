#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings in the list
 * @...: list strings to be printed.
 * return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;

	unsigned int i;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str != NULL)
			printf("%s", str);

		else
			printf("(nil)");

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
