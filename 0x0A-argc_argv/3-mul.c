#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of args
 * @argv: array of args
 * Return: 0 on success or 1 on error
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);

	printf("%d\n", n1 * n2);

	return (0);
}

/**
* _atoi - converts a string to an integer
* @s: string to be converted
* Return: the int converted from the string
*/

int _atoi(char *s)
{
	int i, j, k, len, m, num;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	m = 0;
	num = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++j;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (j % 2)
				num = -num;
			k = k * 10 + num;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}
	if (i == 0)
		return (0);
	return (k);
}
