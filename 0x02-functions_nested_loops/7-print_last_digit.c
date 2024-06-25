#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @i: number to be checked
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int ls;

	ls = i % 10;
	if (ls < 0)
	{
		ls = ls * -1;
	}
	_putchar(ls + '0');
	return (ls);
}
