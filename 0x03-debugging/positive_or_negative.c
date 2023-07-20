#include <stdio.h>
#include "main.h"
/**
 * positive_or_negative - checks if a num is + or -
 * @i: num to be checked
 * Return: 0 on success
 **/

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
