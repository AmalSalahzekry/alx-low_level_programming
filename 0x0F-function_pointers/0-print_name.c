#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name -  function that prints a name.
 * @name: string to add
 * @f: the pointer function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
