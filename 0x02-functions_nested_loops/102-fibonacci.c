#include <stdio.h>
/**
	 * main - Prints first 50 Fibonacci numbers starting with 1 and 2
	 *
	 * Return: Always 0.
	 */

int main(void)
{
	long int i;
	long int j = 1;
	long int k = 2;
	long int up;

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

