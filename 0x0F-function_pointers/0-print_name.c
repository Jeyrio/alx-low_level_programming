#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints a name
 *
 * @name: name to be printed
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
