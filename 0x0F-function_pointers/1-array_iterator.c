#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each array element
 * @array: props/ array to be entered the function
 * @size: props/number of element to be printed
 * @action: props/ pointer to the fuction which is choosen
 * Return: void function which return nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
