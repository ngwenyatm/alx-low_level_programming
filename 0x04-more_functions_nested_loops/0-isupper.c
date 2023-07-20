#include "main.h"

/**
 * _isupper - check for uppercase letters
 * @c: char
 *
 * Return: 1 if true and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

