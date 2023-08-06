#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character
 * @c: The character to be printed
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

