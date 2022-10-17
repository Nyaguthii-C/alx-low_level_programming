#ifndef DOG_H
#define DOG_H

/**
*struct dog - structure for dog
* @name: pointer for element in structure dog
* @age: age element in struct
* @owner: pointer owner element
*/
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog_t *d, char *name, float age, char *owner);
int main(void);
void print_dog(struct dog_t *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/

#endif /*DOG_H*/
