/*
** EPITECH PROJECT, 2018
** my_cook_2017
** File description:
** default_callback functions
*/

# include "cook.h"

void default_hover_callback(cook_t *cook, button_t *btn)
{
	sfIntRect rec;
	(void)cook;

	rec = btn->rect;
	rec.top += 82;

	sfSprite_setTextureRect(btn->sprite, rec);
}

void default_click_callback(cook_t *cook, button_t *btn)
{
	sfIntRect rec;
	(void)cook;

	rec = btn->rect;
	rec.top += 82 * 2;

	sfSprite_setTextureRect(btn->sprite, rec);
}
