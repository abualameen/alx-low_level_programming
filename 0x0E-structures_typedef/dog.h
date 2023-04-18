#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the strut called dog
 * Description: The function creat an instance of a dog
 * @name: attribute
 * @age: attribute
 * @owner: attribute
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
