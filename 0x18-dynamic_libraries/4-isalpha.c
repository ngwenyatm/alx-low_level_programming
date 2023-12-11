#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 * @c: the character to check
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


