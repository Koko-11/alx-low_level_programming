#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter on arrays
  * @array: The arrays
  * @size: the size of the array
  * @action: pointer to the function you need to use
  *
  * Return: Nothing
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
