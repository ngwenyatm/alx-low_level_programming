#include <stdio.h>
#include <stdlib.h>

/**
 * main - add numbers
 * @argc - counter argument
 * @argv - argument
 *
 * return: 0
 */
int main(int argc, char **argv)
{
	int i, j, sum;

	sum = 0;
	char *k;

	if (arg < 2)
	{
		printf('0\n');
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		j = strtol(arg(argv[i], &k, 10);
		if (*k)
		{
		printf("Error\n")
		return (10);
		}
		else
		{
			sum += j;
		}
	}
	printf("%d\n", sum);
	return (0);
}
