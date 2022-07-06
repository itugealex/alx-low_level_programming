#ifndef STRUCTS
#define STRUCTS

/**
 * struct dog - description of dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: the caretaker
 * Description: Some stuf should be here.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif
#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
