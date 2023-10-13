#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - performs simple operations.
 * @argc: The number of args given.
 * @argv: array of pointers to args.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;
	int res;
	char op;
	int (*fptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fptr = get_op_func(argv[2]);

	if (!fptr)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if (b == 0 && (op == '/' || op == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	res = fptr(a, b);

	printf("%d\n", res);
	return (0);
}
