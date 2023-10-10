#ifndef DOG_H
#define DOG_H

/**
 * struct dog- dog structure
 *
 * @name: pointer to a char type
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: A header file for the dog sructure.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
