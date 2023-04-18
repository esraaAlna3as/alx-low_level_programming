#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#endif /*_DOG_H*/
