#include "function_pointers.h"

/**
 * print_name - that print name
 * @name: the name to print
 * @f: function to pointer
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
