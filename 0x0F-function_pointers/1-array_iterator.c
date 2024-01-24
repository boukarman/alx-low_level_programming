#include "function_pointers.h"

/**
 * array_iterator - function execute other
 * function given as param on array
 * @array: array
 * @size: array size
 * @action: pointer to function
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
