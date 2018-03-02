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
	sfSound_setVolume(cook->sound, 42);
	float sound = sfSound_getVolume(cook->sound);

	conf.type = slideVolume;
	conf.mid_axis = 250;
	conf.range.x = 760;
	conf.range.y = 1040;
	conf.state = gameOnSettings;
	conf.onSlide = NULL; // TODO : Make this
	conf.btn = get_button(cook, btnVolume, gameOnSettings);
	pos.y = conf.mid_axis;
	pos.x = ((sound / 100) * (conf.range.y - conf.range.x)) + conf.range.x;
	conf.btn->pos = pos; // TODO: fix decallage with origin and btn position
	sfSprite_setPosition(conf.btn->sprite, conf.btn->pos);

	add_slider(cook, conf);
	info("Configured volume slider for settings view!");
}
