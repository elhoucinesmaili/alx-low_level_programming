#include <stdlib.h>
#include "dog.h"

int str_len(char *s);
char *str_cpy(char *dest, char *src);

/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  *
  * Return: pointer to the new dog, or NULL on failure
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_len = 0, owner_len = 0;

	if (name != NULL && owner != NULL)
	{
		name_len = str_len(name) + 1;
		owner_len = str_len(owner) + 1;
		my_dog = malloc(sizeof(dog_t));

		if (my_dog == NULL)
			return (NULL);

		my_dog->name = malloc(sizeof(char) * name_len);

		if (my_dog->name == NULL)
		{
			free(my_dog);
			return (NULL);
		}

		my_dog->owner = malloc(sizeof(char) * owner_len);

		if (my_dog->owner == NULL)
		{
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}

		my_dog->name = str_cpy(my_dog->name, name);
		my_dog->owner = str_cpy(my_dog->owner, owner);
		my_dog->age = age;
	}

	return (my_dog);
}

/**
  * str_len - returns the length of a string
  * @s: string to count
  *
  * Return: length of the string
  */
int str_len(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
  * str_cpy - copies a string
  * @dest: destination value
  * @src: source value
  *
  * Return: pointer to dest
  */
char *str_cpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
