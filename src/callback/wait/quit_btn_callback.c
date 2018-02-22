/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** quit_btn_callback functions
*/

# include "cook.h"

void btn_quit_click(cook_t *cook, button_t *btn)
{
	sfIntRect rec;

	rec = btn->rect;
	rec.top += 82 * 2;

	sfSprite_setTextureRect(btn->sprite, rec);
}

void btn_quit_released(cook_t *cook, button_t *btn)
{
	sfRenderWindow_close(cook->win);
	reset_to_normal_rect(cook);
}

void btn_quit_hover(cook_t *cook, button_t *btn)
{
	sfIntRect rec;

	rec = btn->rect;
	rec.top += 82;

	sfSprite_setTextureRect(btn->sprite, rec);
}