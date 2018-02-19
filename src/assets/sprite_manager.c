/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** sprite_manager_functions
*/

# include "cook.h"

sfSprite *get_sprite(cook_t *cook, int id)
{
	assets_t *tmp = cook->assets;

	while (tmp != NULL) {
		if (tmp->id == id) {
			return (tmp->sp);
		}
		
		tmp = tmp->next;
	}

	return (NULL);
}