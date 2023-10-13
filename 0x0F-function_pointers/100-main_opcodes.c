#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	char *arr;
	int byte = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	while (i < byte)
	{
		if (i == (byte - 1))
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
		i++;
	}
	return (0);
}
