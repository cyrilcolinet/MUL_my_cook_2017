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
	sfIntRect rec = { 2, 1, 295, 82 };
	sfTexture *texture = get_texture(cook, aBtnSp);

	conf.type = btnPlay;
	conf.pos.x = 265;
	conf.pos.y = 375;
	conf.onClick = btn_play_click;
	conf.onHover = btn_play_hover;
	conf.onStart = btn_play_released;
	conf.state = gameWait;
	conf.sprite = sfSprite_create();
	sfSprite_setTexture(conf.sprite, texture, sfFalse);
	sfSprite_setTextureRect(conf.sprite, rec);
	sfSprite_setPosition(conf.sprite, conf.pos);
	conf.rect = rec;
	conf.next = NULL;

	info("Configured play button! Now add it.");
	add_button(cook, conf);
}

void setup_settings_btn(cook_t *cook)
{
	button_t conf;
	sfIntRect rec = { 2, 253, 295, 82 };
	sfTexture *texture = get_texture(cook, aBtnSp);

	conf.type = btnSettings;
	conf.pos.x = 625;
	conf.pos.y = 375;
	conf.onClick = btn_settings_click;
	conf.onHover = btn_settings_hover;
	conf.onStart = btn_settings_released;
	conf.state = gameWait;
	conf.sprite = sfSprite_create();
	sfSprite_setTexture(conf.sprite, texture, sfFalse);
	sfSprite_setTextureRect(conf.sprite, rec);
	sfSprite_setPosition(conf.sprite, conf.pos);
	conf.rect = rec;
	conf.next = NULL;

	info("Configured settings button! Now add it.");
	add_button(cook, conf);
}

void setup_quit_btn(cook_t *cook)
{
	(void)cook;
}

void setup_credits_btn(cook_t *cook)
{
	(void)cook;
}
