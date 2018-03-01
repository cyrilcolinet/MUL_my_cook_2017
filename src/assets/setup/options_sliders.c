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

	conf.type = slideVolume;
	conf.mid_axis = 250;
	conf.range.x = 760;
	conf.range.y = 1040;
	conf.state = gameOnSettings;
	conf.onSlide = NULL; // TODO : Make this
	conf.btn = get_button(cook, btnVolume);

	add_slider(cook, conf);
	info("Configured volume slider for settings view!");
}
