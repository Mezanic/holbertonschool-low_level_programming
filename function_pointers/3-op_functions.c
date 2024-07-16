#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - return the summ of a and b
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference between a and b
 * @a: first number
 * @b: second number
 *
 * Return: difference between number
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first number
 * @b: second number
 *
 * Return: product of num
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of a and b
 * @a: first number
 * @b: second number
 *
 * Return: result of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return the remainder of the division of a and b
 * @a: first number
 * @b: second number
 *
 * Return: remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
