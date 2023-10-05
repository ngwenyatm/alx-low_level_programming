#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1 (to)
 * @s2: string 2 (from)
 * @n: n bytes from s2 to concat to s1
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
	{
		l1++;
	}
	while (s2 && s2[l2])
	{
		l2++;
	}
	if (n < l2)
		{
		s = malloc((l1 + n + 1) * sizeof(char));
	}
	else
		{
		s = malloc((l1 + l2 + 1) * sizeof(char));
		}
	while (!s)
		{
		return (NULL);
		}
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= l2 && i < (l1 + l2))
	{
		s[i++] = s2[j++];
	}
	s[i] = '\0';
	return (s);
}

