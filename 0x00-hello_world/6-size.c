#include <stdio.h>

/**
 * main -  printing the size of various types
 *
 * REturn:0 (if it works)
 */

int main(void)
{
	char one;
	int two;
	long three;
	long long four;
	float five;

	printf("Size of a char:%lu byte(s)\n", sizeof(one));
	printf("Size of an int: %lu byte(s)\n", sizeof(two));
	printf("Size of a long int:%lu byte(s)\n", sizeof(three));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(four));
	printf("Size of a float:%lu byte(s)\n", sizeof(five));
Return:0;
}
