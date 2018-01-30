/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** utilities functions
*/

# include "cook.h"

int configure_assets(cook_t *data)
{
	return (0);
}

cook_t *configure(void)
{
	cook_t *data = malloc(sizeof(*data));

	if (data == NULL) {
		write(2, "Malloc failed. Aborded.\n", 24);
		return (NULL);
	}

	data->state = gameWait;

	return (data);
}