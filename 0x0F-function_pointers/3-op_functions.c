#include "3-calc.h"
/*
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
*/

/**
 * op_add - sum of a and b.
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction of a and b.
 * @a: 1st int.
 * @b: 2nd int
 *
 * Return: difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b.
 * @a: 1st int.
 * @b: 2nd int.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of a and b.
 * @a: 1st int.
 * @b: 2nd int
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - finds remainder of the division of a and b.
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: remainder from a divided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
