#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - are these even digits bro
 * @str: array str
 * Return: Always 0
 */
int check_num(char *str)
{
	unsigned int idx;

	idx = 0;
	while (idx < strlen(str))
	{
		if (!isdigit(str[idx]))
		{
			return (0);
		}

		idx++;
	}
	return (1);
}

/**
 * main - turn string into int
 * @argc: Count
 * @argv: Arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])

{
	int inc, intoInt;
	int sum = 0;

	inc = 1;
	while (inc < argc)
	{
		if (check_num(argv[inc]))

		{
			intoInt = atoi(argv[inc]);
			sum += intoInt;
		}

		else
		{
			printf("Error\n");
			return (1);
		}
		inc++;
	}

	printf("%d\n", sum);
	return (0);
}

