#include <stdio.h>

/**
 * main - Printin more numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int p;

		for (p = 0; p < 10; p++)
		{
			putchar(p + '0');
			if (p != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

	putchar('\n');
return (0);
}
