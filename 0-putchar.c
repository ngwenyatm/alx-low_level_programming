#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character
 * @c: The character to be printed
 * Return: On success 1. -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

