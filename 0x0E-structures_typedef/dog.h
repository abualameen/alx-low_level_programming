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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
