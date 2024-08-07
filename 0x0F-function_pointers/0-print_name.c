#include "function_pointers.h"

/**
  * print_name - Function that prints a name
  * @name: The name to be printed
  * @f: Pointer
  *
  * Return: Nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
