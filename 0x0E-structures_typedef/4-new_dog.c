#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * new_dog - a function that creats a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *Hazy;
	char *ava, *eve;
	int h, m, d;

	Hazy = malloc(sizeof(struct dog));
	if (Hazy == NULL)
		return (NULL);

	for (h = 0; *(name + h) != '\0'; h++)
		;
	for (m = 0; *(owner + m) != '\0'; m++)
		;
	ava = malloc(sizeof(char) * h + 1);
	if (ava == NULL)
	{
		free(Hazy);
		return (NULL);
	}
	eve = malloc(sizeof(char) * m + 1);
	if (eve == NULL)
	{
		free(ava);
		free(Hazy);
		return (NULL);
	}
	for (d = 0; d <= h; d++)
		*(ava + d) = *(name + d);
	for (d = 0; d <= m; d++)
		*(eve + d) = *(owner + d);

			Hazy->name = ava;
			Hazy->age = age;
			Hazy->owner = eve;
	return (Hazy);
}
