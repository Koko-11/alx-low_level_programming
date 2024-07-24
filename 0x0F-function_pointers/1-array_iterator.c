#include "function_pointers.h"

/**
  * array_iterator - Executes a function on each element of an array
  * @array: array
  * @size: size of the array
  * @action: Pointer to the function
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
