#include <stdio.h>
#include "main.h"

/**
 * is_it_prime - function to check if it is prime
 * @n: The number to be checked
 * @i: tester
 *
 */
int is_it_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_it_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if n is a prime number else 0
 */
int is_prime_number(int n)
{
	return (is_it_prime(n, 2));
}
