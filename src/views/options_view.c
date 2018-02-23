/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** options_view functions
*/

# include "cook.h"

void options_view(cook_t *cook)
{
	sfRenderWindow_clear(cook->win, sfBlack);
	sfRenderWindow_setTitle(cook->win, "My Cook | Options");
	sfRenderWindow_drawSprite(cook->win, get_sprite(cook, aOptionsBg), NULL);
}