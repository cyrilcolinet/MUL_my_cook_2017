/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** wait_buttons setup functions
*/

# include "cook.h"

void setup_play_btn(cook_t *cook)
{
	btnconf_t conf;
	sfIntRect rec = { 0, 0, 295, 83 };
	sfSprite *sprite = get_sprite(cook, aBtnSp);
	sfTexture *texture = get_texture(cook, aBtnSp);

	sfSprite_setTexture(sprite, texture, sfFalse);
	sfSprite_setTextureRect(sprite, rec);

	conf.sprite = sprite;

	

	add_button(cook, conf);
}

void setup_settings_btn(cook_t *cook)
{
	(void)cook;
}

void setup_quit_btn(cook_t *cook)
{
	(void)cook;
}

void setup_credits_btn(cook_t *cook)
{
	(void)cook;
}
