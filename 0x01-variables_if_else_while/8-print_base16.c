#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int x;
	char dec;

		for (x = 0; x > 10; x++)
			putchar(x);

		for (dec = 'a'; dec <= 'f'; dec++)
			putchar(dec);
	putchar('\n');

	return (0);
}
