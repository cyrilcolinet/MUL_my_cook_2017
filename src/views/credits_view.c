/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** credits_view functions
*/

# include "cook.h"

void credits_view(cook_t *cook)
{
	sfRenderWindow_clear(cook->win, sfBlack);
	sfRenderWindow_drawSprite(cook->win, get_sprite(cook, aCreditsBg), NULL);
}