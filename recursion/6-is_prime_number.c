#include "main.h"

/**
 * is_prime_number -  find if the number is a prime number or not
 * @n: number
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_prime_n(n, 2));
}

/**
 * _prime_n - find if the number is a prime number or not
 * @n: number
 * @i: itération
 *
 * Return: 1 or 0
 */

int _prime_n(int n, int i)
{

	if (n % i == 0)
		return (0);

	if (i * i > n)
		return (1);

	return (_prime_n(n, i + 1));

}
