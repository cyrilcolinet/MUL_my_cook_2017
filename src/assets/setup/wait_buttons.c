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
	sfIntRect rec = { 2, 1, 290, 82 };
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

	add_button(cook, conf);
	info("Configured play button!");
}

void setup_settings_btn(cook_t *cook)
{
	button_t conf;
	sfIntRect rec = { 2, 253, 290, 82 };
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

	add_button(cook, conf);
	info("Configured options button!");
}

void setup_credits_btn(cook_t *cook)
{
	button_t conf;
	sfIntRect rec = { 2, 507, 290, 82 };
	sfTexture *texture = get_texture(cook, aBtnSp);

	conf.type = btnCredits;
	conf.pos.x = 265;
	conf.pos.y = 500;
	conf.onClick = btn_credits_click;
	conf.onHover = btn_credits_hover;
	conf.onStart = btn_credits_released;
	conf.state = gameWait;
	conf.sprite = sfSprite_create();
	sfSprite_setTexture(conf.sprite, texture, sfFalse);
	sfSprite_setTextureRect(conf.sprite, rec);
	sfSprite_setPosition(conf.sprite, conf.pos);
	conf.rect = rec;
	conf.next = NULL;

	add_button(cook, conf);
	info("Configured credits button!");
}

void setup_quit_btn(cook_t *cook)
{
	button_t conf;
	sfIntRect rec = { 2, 765, 290, 82 };
	sfTexture *texture = get_texture(cook, aBtnSp);

	conf.type = btnQuit;
	conf.pos.x = 625;
	conf.pos.y = 500;
	conf.onClick = btn_quit_click;
	conf.onHover = btn_quit_hover;
	conf.onStart = btn_quit_released;
	conf.state = gameWait;
	conf.sprite = sfSprite_create();
	sfSprite_setTexture(conf.sprite, texture, sfFalse);
	sfSprite_setTextureRect(conf.sprite, rec);
	sfSprite_setPosition(conf.sprite, conf.pos);
	conf.rect = rec;
	conf.next = NULL;

	add_button(cook, conf);
	info("Configured quit button!");
}
