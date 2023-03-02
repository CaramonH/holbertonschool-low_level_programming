#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: The size of integers
 * @size: The size of the array
 * @cmp: A pointer to the function that compares values
 *
 * Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
