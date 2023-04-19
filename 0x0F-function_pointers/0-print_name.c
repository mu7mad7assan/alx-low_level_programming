#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - function that prints name using pointer to a function
 * @name: props/name to be enterd to function
 * @f: props/ pointer to that function
 * Return: void function nothing to return
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
