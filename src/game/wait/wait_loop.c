/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** wait_loop functions
*/

# include "cook.h"

void wait_loop(cook_t *cook)
{
	sfRenderWindow_drawSprite(cook->win, get_sprite(cook, aWaitBg), NULL);
}