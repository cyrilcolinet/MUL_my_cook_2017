/*
** EPITECH PROJECT, 2018
** my_cook
** File description:
** buttons_loader functions
*/

# include "cook.h"

void load_wait_buttons(cook_t *cook)
{
	setup_wait_play_btn(cook);
	setup_wait_settings_btn(cook);
	setup_wait_quit_btn(cook);
	setup_wait_credits_btn(cook);
}

void load_credits_buttons(cook_t *cook)
{
	button_t conf;
	sfIntRect rec = { 291, 507, 290, 82 };
	sfTexture *texture = get_texture(cook, aBtnSp);

	conf.type = btnReturn;
	conf.pos.x = 47;
	conf.pos.y = 580;
	conf.onClick = btn_return_click;
	conf.onHover = btn_return_hover;
	conf.onStart = btn_return_released;
	conf.state = gameOnCredits;
	conf.sprite = sfSprite_create();
	sfSprite_setTexture(conf.sprite, texture, sfFalse);
	sfSprite_setTextureRect(conf.sprite, rec);
	sfSprite_setPosition(conf.sprite, conf.pos);
	conf.rect = rec;
	conf.next = NULL;

	add_button(cook, conf);
	info("Configured return button for credits view!");
}
