#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format.
 * @format: A list of types of arguments passed to the function.
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str;
	const char t_arg[] = "cifs";
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
	while (t_arg[j])
	{
	if (format[i] == t_arg[j])
	{
		printf("%s", sep);
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
			break;
			case 'i':
				printf("%d", va_arg(args, int));
			break;
			case 'f':
				printf("%f", va_arg(args, double));
			break;
			case 's':
				str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		sep = ", ";
		break;
	}
	j++;
	}
	i++;
	}

	printf("\n");
	va_end(args);
}
