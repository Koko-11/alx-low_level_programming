#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always zero
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	
	return (0);
}
