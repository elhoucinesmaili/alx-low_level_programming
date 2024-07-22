#ifndef DOG_H
#define DOG_H

/**
 * struct car - car class
 *
 * @make: Make of the car
 *
 * @model: Model of the car
 *
 * @year: Year of manufacture
 *
 * @owner: Owner of the car
 */

struct car
{
	char *make;
	char *model;
	int year;
	char *owner;
};

void init_car(struct car *c, char *make, char *model, int year, char *owner);
void print_car(struct car *c);

typedef struct car car_t;

car_t *new_car(char *make, char *model, int year, char *owner);

void free_car(car_t *c);

#endif

