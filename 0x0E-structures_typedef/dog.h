#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - dog's basic info
 * @name: 1st element
 * @age: 2nd element
 * @owner: 3rd element
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
