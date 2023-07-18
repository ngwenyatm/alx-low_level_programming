#include "main.h"

/**
 * _islower - Checks lower_case alphabet
 * @c: Character to be checked
 * Return: character if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

