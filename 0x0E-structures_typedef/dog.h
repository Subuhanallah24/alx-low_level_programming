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

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);
void free_dog(dog_t *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif
