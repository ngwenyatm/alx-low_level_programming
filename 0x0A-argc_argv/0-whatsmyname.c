#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program then new line
 * @argc: number of arg
 * @argv: array of arg
 * Return: Always 0 
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
