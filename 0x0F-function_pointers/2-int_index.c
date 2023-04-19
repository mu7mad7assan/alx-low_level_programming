#include "function_pointers.h"
/**
 * int_index - function which return index of input if condition is true , else -1
 * @array: props/ array to be entered
 * @size: props/ size of array
 * @cmp: props/ pointer to one of the functions
 * Return: retrun integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
