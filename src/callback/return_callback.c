/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** return_callback functions
*/

# include "cook.h"

void btn_return_click(cook_t *cook, button_t *btn)
{
	sfIntRect rec;

	rec = btn->rect;
	rec.top += 82 * 2;

	sfSprite_setTextureRect(btn->sprite, rec);
}

void btn_return_released(cook_t *cook, button_t *button)
{
	reset_to_normal_rect(cook);
	cook->state = cook->last_st;
	cook->last_st = gameUnknown;
}

void btn_return_hover(cook_t *cook, button_t *btn)
{
	sfIntRect rec;

	rec = btn->rect;
	rec.top += 82;

	sfSprite_setTextureRect(btn->sprite, rec);
}