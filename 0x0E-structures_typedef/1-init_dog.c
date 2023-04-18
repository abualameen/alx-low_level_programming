#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function declearation
 * @d: argument
 * @name: argument
 * @age: argument
 * @owner: argument
 * Return: initiated dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
