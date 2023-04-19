#include "function_pointers.h"
/**
 * print_name - function that prints name
 * @name: argument
 * @f: pointer to function argu
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
