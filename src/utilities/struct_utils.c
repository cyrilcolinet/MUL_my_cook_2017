/*
** EPITECH PROJECT, 2018
** cook
** File description:
** struct_utils functions
*/

# include "cook.h"

cook_t *configure_struct(void)
{
	cook_t *cook = malloc(sizeof(*cook));
	sfVideoMode mode = { 1200, 700, 32 };
	char *title = "My Cook | v0.0.1";

	if (cook == NULL)
		return (NULL);

	cook->state = gameWait;
	cook->win = sfRenderWindow_create(mode, title, sfClose, NULL);

	return (cook);
}