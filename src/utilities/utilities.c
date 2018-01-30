/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** utilities functions
*/

# include "cook.h"

int configure_assets(cook_t *data)
{
	(void)data;

	return (0);
}

cook_t *configure_struct(void)
{
	sfVideoMode 	mode = { 1600, 800, 32 };
	char 			*title = "MyCook - Cooking can be fun";
	cook_t 			*data = malloc(sizeof(*data));

	if (data == NULL) {
		write(2, "Malloc failed. Aborded.\n", 24);
		return (NULL);
	}

	data->win = sfRenderWindow_create(mode, title, sfClose, NULL);
	data->state = gameWait;

	return (data);
}