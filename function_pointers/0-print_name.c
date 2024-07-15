#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to print
 * @f: pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
