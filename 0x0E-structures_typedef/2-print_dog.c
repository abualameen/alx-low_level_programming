#include "dog.h"
#include <stdio.h>

/**
 * print_dog - the function prints a struct
 * @d: function argument
 * Return: struct object
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	printf("Age: %f\n", (*d).age);
	if ((*d).owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
