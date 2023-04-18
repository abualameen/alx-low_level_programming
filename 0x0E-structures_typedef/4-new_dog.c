#include "dog.h"
#include <stdlib.h>
int str_len(char *str);
char *str_copy(char *dest, char *src);
/**
 * new_dog - the function creates a now dog instant
 * @name: argument
 * @age: argument
 * @owner: argument
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	(*new_dog).name = (char *)malloc(sizeof(char) * (str_len(name) + 1));
	(*new_dog).owner = (char *)malloc(sizeof(char) * (str_len(owner) + 1));
	if ((*new_dog).name == NULL || (*new_dog).owner == NULL)
	{
		free((*new_dog).name);
		free((*new_dog).owner);
		free(new_dog);
		return (NULL);
	}
	str_copy((*new_dog).name, name);
	str_copy((*new_dog).owner, owner);
	(*new_dog).age = age;
	return (new_dog);
}

/**
 * str_len - compute the string len
 * @str: argument
 * Return: 0
 */

int str_len(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * str_copy - copies the string form sorc to desti
 * @dest: argument
 * @src: argument
 * Return: void
 */

char *str_copy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

