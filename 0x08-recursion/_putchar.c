#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints the character c
 * @c: The character to be printed
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

