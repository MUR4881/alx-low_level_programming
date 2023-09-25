#ifndef DOG
#define DOG
/**
 * struct dog - Dog's Identity
 * @name: a word often said to refer to the dog
 * @age: how many days/weeks/month/year the dog has been since birth
 * @owner: The person in pocession of the above described dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
