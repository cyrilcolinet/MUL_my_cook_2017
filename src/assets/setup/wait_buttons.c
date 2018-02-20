/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** wait_buttons setup functions
*/

# include "cook.h"

void setup_play_btn(cook_t *cook)
{
	button_t conf;
	sfIntRect rec = { 0, 0, 295, 83 };
	sfSprite *sprite = sfSprite_create();
	sfTexture *texture = get_texture(cook, aBtnSp);

	sfSprite_setTexture(sprite, texture, sfFalse);
	sfSprite_setTextureRect(sprite, rec);

	conf.type = btnPlay;
	conf.onClick = btn_play_click;
	conf.onHover = btn_play_hover;
	conf.state = gameWait;
	conf.sprite = sprite;
	conf.rect = rec;
	conf.next = NULL;

	info("Configured play button! Now add it.");
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
