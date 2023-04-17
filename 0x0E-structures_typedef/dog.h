#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initialize a struct of dog with name, age, owner basic members
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * description: This struct of dog with some basic info for a dog as it's name
 * and age and also the owner of this dog, it's a simple struct 
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * doggy - typedef for struct dog
 */
typedef struct dog doggy;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
doggy *new_dog(char *name, float age, char *owner);
void free_dog(doggy *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
