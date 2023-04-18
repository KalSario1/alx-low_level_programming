#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure for dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog owner
 * 
 * Description: struct Called "dog" that stores it's name, age and owner of the dog.
*/
struct dog 
{
    char *name;
    float age;
    char *owner;
};

#endif