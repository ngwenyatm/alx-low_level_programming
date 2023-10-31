int realRoot(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (realRoot(n, 0));
}

/**
 * realRoot - find the natural square root of n
 * @n: number to find the sqaure root of
 * @i: counter
 * Return: square root
 */

int realRoot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (realRoot(n, i + 1));
}

