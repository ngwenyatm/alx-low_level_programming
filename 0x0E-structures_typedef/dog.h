#ifndef DOG_H
#define DOG_H

/**
 * struct dog - the structure
 * @age: age of dog
 * @name: name   of dog
 * @owner: owner of dog
 *
 * Description: information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
