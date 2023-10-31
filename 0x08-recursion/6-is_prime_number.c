#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if prime number or not
 * @n: inputed num
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculate recursively
 * @n: number to check
 * @i: counter
 *
 * Return: 1 if prime, otherwise 0
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
