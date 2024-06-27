#include <math.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	long x, lx;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
		lx = number / x;
	}
	}
	printf("%ld\n", lx);
	return (0);
}
