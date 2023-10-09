#include "main.h"

/**
 * _isupper - checks if the char is uppercase
 * @c: char to be checked
 * Return: 0 or 1 on success or failure 
 * respectively
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


