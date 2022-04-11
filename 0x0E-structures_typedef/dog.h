#ifndef DOG_H
#define DOG_H
/**
  * struct dog - structure
  * @name: 1
  * @age: 2
  * @owner: 3
  *
  * A structure holder data about a dog
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} _dog;
_dog *a_dog(char *name, float age, char *owner);
#endif
