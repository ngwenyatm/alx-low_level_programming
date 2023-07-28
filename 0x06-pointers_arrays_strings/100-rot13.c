#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 * @str: pointer pointing to string
 * Return: *str
 */

char *rot13(char *str)
{
	int i;
	int j;
	char let1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char letord[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == let1[j])
			{
				str[i] = letord[j];
				break;
			}
		}
	}
	return (str);
}

