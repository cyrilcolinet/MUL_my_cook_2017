/*
** EPITECH PROJECT, 2018
** my_cook_2017
** File description:
** options_sliders functions
*/

# include "cook.h"

void setup_volume_options_slider(cook_t *cook)
{
	slider_t conf;
	sfVector2f pos = { 100, 100 };
	sfVector2f ori = { 100, 100 };

	conf.type = slideVolume;
	conf.mid_axis = pos.y = ori.y = 250;
	conf.range.x = pos.x = 760;
	conf.range.y = ori.x = 1040;
	ori.x += 45;
	ori.y -= 25;
	conf.state = gameOnSettings;
	conf.onSlide = slider_volume_callback;
	conf.btn = get_button(cook, btnVolume, gameOnSettings);
	conf.text = sfText_create();
	conf.btn->pos = pos; // TODO: fix decallage with origin and btn position
	sfSprite_setPosition(conf.btn->sprite, conf.btn->pos);
	sfText_setPosition(conf.text, ori);
	sfText_setFont(conf.text, cook->font);
	sfText_setCharacterSize(conf.text, 40);
	add_slider(cook, conf);
}
