#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of two numbers.
 * @a: props/The first.
 * @b: props/The second.
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that returns the subtraction of two numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that returns the production of two numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that returns the division of two numbers.
 * @a: The first num.
 * @b: The second num.
 *
 * Return: The division of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function that returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
