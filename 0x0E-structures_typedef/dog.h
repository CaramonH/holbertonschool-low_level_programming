#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributes
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 *
 * Description: The attributes of the dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
