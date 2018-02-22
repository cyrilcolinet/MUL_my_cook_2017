/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** credits_btn_callback functions
*/

# include "cook.h"

void btn_credits_click(cook_t *cook, button_t *btn)
{
	sfIntRect rec;

	rec = btn->rect;
	rec.top += 82 * 2;

	sfSprite_setTextureRect(btn->sprite, rec);
}

void btn_credits_released(cook_t *cook, button_t *btn)
{
	cook->last_st = cook->state;
	cook->state = gameOnCredits;
	reset_to_normal_rect(cook);
}

void btn_credits_hover(cook_t *cook, button_t *btn)
{
	sfIntRect rec;

	rec = btn->rect;
	rec.top += 82;

	sfSprite_setTextureRect(btn->sprite, rec);
}