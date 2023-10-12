#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: String to be printed between numbers
 * @n: The number of integers
 * @...: numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;

	va_start(num, n);

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(num);
}
