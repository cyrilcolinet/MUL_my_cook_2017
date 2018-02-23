/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** play_btn_callback function
*/

# include "cook.h"

void btn_play_click(cook_t *cook, button_t *btn)
{
	sfIntRect rec;

	rec = btn->rect;
	rec.top += 82 * 2;

	sfSprite_setTextureRect(btn->sprite, rec);
}

void btn_play_released(cook_t *cook, button_t *btn)
{
	cook->state = gameRun;
	cook->last_st = gameUnknown;
	sfRenderWindow_setTitle(cook->win, "My Cook");
	reset_to_normal_rect(cook);
}

void btn_play_hover(cook_t *cook, button_t *btn)
{
	sfIntRect rec;

	rec = btn->rect;
	rec.top += 82;

	sfSprite_setTextureRect(btn->sprite, rec);
}