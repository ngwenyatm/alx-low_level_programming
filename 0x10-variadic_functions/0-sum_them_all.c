#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums up all it's parameters
 * @n: number of paramters
 * @...: parameters to be added via variadic list
 *
 * Return: sum of all parameters
 * If n == 0 return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sumnum;
	unsigned int i, total = 0;

	va_start(sumnum, n);

	for (i = 0; i < n; i++)
	total += va_arg(sumnum, int);

	va_end(sumnum);

	return (total);
}

