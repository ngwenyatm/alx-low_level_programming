#include <stdio.h>
/**
	 * main - Prints first 50 Fibonacci numbers starting with 1 and 2
	 *
	 * Return: Always 0.
	 */

int main(void)
{
	int i;
	int j = 1;
	int k = 2;
	int up;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		up = j + k;
		j = k;
		k = up;
	}

	return (0);
}

