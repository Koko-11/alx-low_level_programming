#include <stdio.h>
#include "main.h"

/**
 * _sqrt - function to find square root
 * @n: The square
 * @i: finding square root
 *
 * Return: The square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The square
 *
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}
