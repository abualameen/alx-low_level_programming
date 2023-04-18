#include <stdlib.h>
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
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
	}
	if ((*d).age)
	{
		printf("Age: %f\n", (*d).age);
	}
	else
	{
		printf("Age: (nil)");
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else
	{
		printf("Owner: %s\n", (*d).owner);
	}
}
