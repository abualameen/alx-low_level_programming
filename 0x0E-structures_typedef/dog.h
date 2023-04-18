#ifndef HEADER_H
#define HEADER_H
/**
 * struct dog - tthe strut called dog
 * Description: The function creat an instance of a dog
 * @name: attribute
 * @age: attribute
 * @owner: attribute
 * Return: 0
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif
