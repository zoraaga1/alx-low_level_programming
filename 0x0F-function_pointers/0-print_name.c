#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: name to be printed
 * @f: a function pointer to print_name
 *
 * return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
