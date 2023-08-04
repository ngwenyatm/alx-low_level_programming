#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of args
 * @argv: array
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}

