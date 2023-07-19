#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms then a new line
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int j, k, up, sum;

	j = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 30; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			sum = sum + j;
		}
		up = j + k;
		j = k;
		k = up;
	}

	printf("%lu\n", sum);

	return (0);
}

