#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of formats to print
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *space = " ";
	char *str;

	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", space, va_arg(all, char));
					break;
				case 'i':
					printf("%s%d", space, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", space, va_arg(all, float));
					break;
				case 's':
					str = va_arg(all, char *);
					if (!str)
						str = "(nil)";
					printf("%s", space, str);
					break;
				default:
					i++;
					continue;
			}
			space = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(all);
}
