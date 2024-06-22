#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 *
 */

int main(void)
{
	int f;
	int l;

	for (f = 0; f < 10; f++)
	{
		for (l = f + 1; l < 10; l++)
		{
			putchar(f + '0');
			putchar(l + '0');
			if (f != 8 || l != 9)
			{
				putchar(',');
				putchar(' ');
				}
		}
	}

	 putchar('\n');

return (0);
}
