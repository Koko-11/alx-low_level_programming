#include "main.h"

/**
 * print_triangle - tri
 * Return: tri
 */

void print_triangle(int size)
{       
        int i, j, k;

        for (i = 1; i <= size; i++)
        {
	for (j = 0; j < size - i; j++)
	{
		_putchar(' ');
	}
	for (k = 0; k < i; k++)
	{
		_putchar('#');
	}
	_putchar('\n');
	}
}
