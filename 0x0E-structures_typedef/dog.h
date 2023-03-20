#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a data structure for a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new namae(Typedef) for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
